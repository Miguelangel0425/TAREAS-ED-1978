#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include "Persona.h"
#include <iostream>
#include <type_traits>

template <typename T>
class SinglyNode {
public:
    T data;
    SinglyNode* next;

    SinglyNode(T data) : data(data), next(nullptr) {}
};

template <typename T>
class SinglyLinkedList {
private:
    SinglyNode<T>* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    void insertarAlFinal(T data) {
        SinglyNode<T>* nuevo = new SinglyNode<T>(data);
        if (!head) {
            head = nuevo;
            return;
        }
        SinglyNode<T>* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = nuevo;
    }

    void mostrar() {
        SinglyNode<T>* temp = head;
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

    ~SinglyLinkedList() {
        SinglyNode<T>* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

#endif // SINGLE_LINKED_LIST_H
