#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class list {
    Node* head;
    Node* tail;
public:
    list() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void insert(int pos, int data) {
        if (pos < 0) {
            cout << "Invalid position\n";
            return;
        }

        Node* newNode = new Node(data);

        if (pos == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid position\n";
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL) {
            tail = newNode;
        }
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    list l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.insert(2, 5);
    l1.print();
    return 0;
};