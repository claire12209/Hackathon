#include <iostream>
using namespace std;

class Node {
private:
    string s;
    Node* next;
public:
    Node() {

        s = "0",
            next = nullptr;
    }
    ~Node() {

    }

    void setString(string s) {
        this->s = s;
    }
    string getString() {
        return this->s;
    }
    Node* getNext() {
        return this->next;
    }
    void setNext(Node* n) {
        this->next = n;
    }


};

class Linked_list {
private:
    Node* root;


public:
    Linked_list() {

        root = nullptr;
    }
    ~Linked_list() {


    }
    bool find(string s) {
        Node* temp = this->root;
        while (temp != nullptr) {

            if (temp->getString() == s) {
                return true;
                //temp = temp->getNext();
            }
            temp = temp->getNext();
        }
        return false;
    }
    void populate(string s) {

        Node* n = new Node();
        n->setString(s);
        if (root == nullptr) {
            root = n;

        }
        else {
            Node* temp = root;
            while (temp->getNext() != nullptr) {
                temp = temp->getNext();

            }
            temp->setNext(n);
        }

    }
    void printList() {
        Node* temp = root;
        while (temp != nullptr) {

            cout << temp->getString() << endl;
            temp = temp->getNext();
        }

    }
    bool isempty() {
        if (root == nullptr) {
            return true;
        }
        else {
            return false;
        }
    }


};

void food_conditions();