#include <iostream>
#include <vector>

class Node {
public:
    int data;
    Node* next;
};

void pushNode(Node** head_ref, int data_val) {
    Node* new_node = new Node();
    new_node->data = data_val;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

int main() {
    Node* head = nullptr;

    for (int i = 5; i > 0; i--) {
        pushNode(&head, i);
    }

    std::vector<int> v;
    Node* current = head;
    while (current != nullptr) {
        v.push_back(current->data);
        current = current->next;
    }

    std::cout << "Middle Value Of Linked List is: ";
    std::cout << v[v.size() / 2] << std::endl;

    return 0;
}
