#ifndef ACTIVITYLOGLINKEDLIST_H
#define ACTIVITYLOGLINKEDLIST_H
#include <iostream>

#include "ActivityLog.h"


class Node {
     public:
         Activity data;
                Node* nxt;
                Node(const Activity& a) : activity(act), next(nullptr) {}
};

class ActivityLogLinkedList : public ActivityLog {
    private: 
        Node* head;
        int count;

    public:
        ActivityLogLinkedList();
        ~ActivityLogLinkedList() override;
        void add(const Activity& activity) override;
        Activity remove() override;
        Activity peek() const override;
        bool isEmpty() const override;
        int size() const override;
};
#endif