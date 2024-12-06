#ifndef DOUBLY_CIRCULAR_LINKED_LIST_H
#define DOUBLY_CIRCULAR_LINKED_LIST_H

#include "Persona.h"
#include <iostream>
#include <type_traits>

template <typename T>
class DoublyCircularNode {
public:
    T data;
    DoublyCircularNode* next;
    DoublyCircularNode* prev;

    DoublyCircularNode(T data) : data(data), next(nullptr), prev(nullptr) {}
};

template <typename T>
class DoublyCircularLinkedList {
private:
    DoublyCircularNode<T>* head;

public:
    DoublyCircularLinkedList() : head(nullptr) {}

    void insertarAlFinal(T data) {
        DoublyCircularNode<T>* nuevo = new DoublyCircularNode<T>(data);
        if (!head) {
            head = nuevo;
            nuevo->next = head;
            nuevo->prev = head;
            return;
        }
        DoublyCircularNode<T>* temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = nuevo;
        nuevo->prev = temp;
        nuevo->next = head;
        head->prev = nuevo;
    }

    void mostrar() {
        if (!head) return;
        DoublyCircularNode<T>* temp = head;
        do {
            if constexpr (std::is_same<T, Persona>::value) {
                // Si el tipo es Persona, llama a sus métodos
                std::cout << temp->data.getnombre1() << " " << temp->data.getapellid() << std::endl;
            }
            else {
                // Si el tipo no es Persona, imprime directamente el dato
                std::cout << temp->data << std::endl;
            }
            temp = temp->next;
        } while (temp != head);
    }

    ~DoublyCircularLinkedList() {
        if (!head) return;
        DoublyCircularNode<T>* temp = head;
        do {
            DoublyCircularNode<T>* toDelete = temp;
            temp = temp->next;
            delete toDelete;
        } while (temp != head);
    }
};

#endif // DOUBLY_CIRCULAR_LINKED_LIST_H


