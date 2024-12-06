

#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Persona.h" // Aseg�rate de incluir Persona.h
#include <iostream>
#include <type_traits>

template <typename T>
class DoublyNode {
public:
    T data;
    DoublyNode* next;
    DoublyNode* prev;

    DoublyNode(T data) : data(data), next(nullptr), prev(nullptr) {}
};

template <typename T>
class DoublyLinkedList {
private:
    DoublyNode<T>* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    void insertarAlFinal(T data) {
        DoublyNode<T>* nuevo = new DoublyNode<T>(data);
        if (!head) {
            head = nuevo;
            return;
        }
        DoublyNode<T>* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = nuevo;
        nuevo->prev = temp;
    }

    void mostrar() {
        DoublyNode<T>* temp = head;
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

    ~DoublyLinkedList() {
        DoublyNode<T>* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

#endif // DOUBLY_LINKED_LIST_H
