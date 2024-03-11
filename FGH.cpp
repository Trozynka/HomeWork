﻿#include <iostream>
using namespace std;

class Node 
{
    public:
        int data;
        Node* next;

        Node(int _data): data(_data){}

};
    class OneLinkedList 
    {
    public:
        Node* head, * tail;

        OneLinkedList() 
        {
            this->head = NULL;
            this->tail = NULL;
        }

        void pop_front() {
            if (head == NULL) return;
            if (head == tail) {
                delete tail;
                head = tail = NULL;
                return;
            }
            Node* node = head;
            head = node->next;
            delete node;
        }

        void push_front(int data)
        {
            Node* node = new Node(data);
            node->next = head;
            head = node;
            // if(tail == NULL) tail = node;
        }

        void push_back(int data)
        {
            Node* node = new Node(data);
            tail->next = node;
            tail = node;
        }

        void show_head()
        {
            cout << "Head:" << head->data << endl;
        }

        void show_tail()
        {
            cout << "Tail:" << tail->data << endl;
        }
    };



    int main()
    {
        OneLinkedList list;

        list.push_back(1);
        list.push_back(2);
        list.push_back(3);
        list.push_back(4);

    }

