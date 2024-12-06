#pragma once
#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include "Persona.h"
#include <iostream>

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
        while (temp) {
            cout << temp->data << endl;
            temp = temp->next;
        }
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

#endif
