#include "ActivityLogLinkedList.h"
#include <iostream>
#include <string> 

using namespace std;

ActivityLogLinkedList::ActivityLogLinkedList() {
    head = nullptr;
    count = 0;
}

ActivityLogLinkedList::~ActivityLogLinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->nxt;
        delete temp;
    }
}

void ActivityLogLinkedList::add(const Activity& activity) {
    Node* newNode = new Node(activity);
    newNode->nxt = head;
    head = newNode;
    count++;
}

Activity ActivityLogLinkedList::remove() {
    if (head == nullptr) {
        cout << "Cannot remove because log is empty\n";
        return Activity{};
    }

    Node* temp = head;
    Activity ret = head->data;
    head = head->nxt;

    delete temp;
    count--;

    return ret;
}

Activity ActivityLogLinkedList::peek() const {
    if (head == nullptr) {
        cout << "Log is empty\n";
        return Activity{};
    }

    return head->data;
}

bool ActivityLogLinkedList::isEmpty() const {
    return head == nullptr;
}

int ActivityLogLinkedList::size() const {
    return count;
}