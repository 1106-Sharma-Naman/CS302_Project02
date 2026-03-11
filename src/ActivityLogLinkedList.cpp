#include "ActivityLog.h"
#include <iostream>
#include <string>
using namespace std;

class Node {
    public:
        Activity data;
        Node* nxt;
};

class ActivityLogLinked : public ActivityLog {
private:
    Node* head;  
    int count;

public:
    ActivityLogLinked() : head(nullptr), count(0) {}

    ~ActivityLogLinked() {
        while (head) {
            Node* temporary = head;
            head = head->nxt;
            delete temporary;
        }
    }

    void add(const Activity& a) override {
        Node* newNode = new Node{a, head};
        head = newNode;
        count++;
    }

    Activity remove() override {
        if (head == nullptr) {
            std::cout << "Cannot remove because log is empty\n";
            return Activity{};
        }
        Node* temp = head;
        Activity ret = head->data;
        head = head->nxt;
        delete temp;
        count--;
        return ret;
    }

    Activity peek() const override {
        if (head == nullptr) {
            std::cout << "Log is empty\n";
            return Activity{};
        }
        return head->data;
    }

    bool isEmpty() const override {
        return head == nullptr;
    }

    int size() const override {
        return count;
    }
};