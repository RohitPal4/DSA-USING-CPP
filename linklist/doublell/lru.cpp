#include<iostream>
#include<map>
using namespace std;
class Node{
    int key;
    int value;
    Node* prev;
    Node* next;
    Node(int k, int v){
        k = k;
        value = v;
        prev = nullptr;
        next = nullptr;

    };

    class LRU{
        map<int, Node*> mp;
        int capacity;
        Node* head;
        Node* tail;
        LRU(int capacity){
            this->capacity = capacity;
            head = new Node(-1, -1);
            tail = new Node(-1, -1);
            head->next = tail;
            tail->prev = head;
        }

    }
}

int main() {
    
    return 0;
}