#ifndef CIRCULAR_LINKED_LIST_H
#define CIRCULAR_LINKED_LIST_H

#include "Persona.h"
#include <iostream>
#include <type_traits>
template <typename T>
class CircularNode {
public:
    T data;
    CircularNode* next;

    CircularNode(T data) : data(data), next(nullptr) {}
};

template <typename T>
class CircularLinkedList {
private:
    CircularNode<T>* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void insertarAlFinal(T data) {
        CircularNode<T>* nuevo = new CircularNode<T>(data);
        if (!head) {
            head = nuevo;
            nuevo->next = head;
            return;
        }
        CircularNode<T>* temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = nuevo;
        nuevo->next = head;
    }

    void mostrar() {
        if (!head) return;
        CircularNode<T>* temp = head;
        do {
            if constexpr (std::is_same<T, Persona>::value) {
                // Si el tipo es Persona, llama a sus m�todos
                std::cout << temp->data.getnombre1() << " " << temp->data.getapellid() << std::endl;
            }
            else {
                // Si el tipo no es Persona, imprime directamente el dato
                std::cout << temp->data << std::endl;
            }
            temp = temp->next;
        } while (temp != head);
    }

    ~CircularLinkedList() {
        if (!head) return;
        CircularNode<T>* temp = head;
        do {
            CircularNode<T>* toDelete = temp;
            temp = temp->next;
            delete toDelete;
        } while (temp != head);
    }
};

#endif // CIRCULAR_LINKED_LIST_H