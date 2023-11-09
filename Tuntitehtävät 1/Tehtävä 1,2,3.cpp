#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* add_to_beginning(Node* start, int value) {
    Node* new_node = new Node;
    new_node->data = value;
    new_node->next = start; 
    return new_node;           
}

void print_list(Node* start) {
    Node* current = start;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* list = nullptr; 

    list = add_to_beginning(list, 1);
    list = add_to_beginning(list, 2);
    list = add_to_beginning(list, 10);
    list = add_to_beginning(list, 3);

    print_list(list);

    Node* current = list;
    while (current != nullptr) {
        Node* to_delete = current;
        current = current->next;
        delete to_delete;
    }

    return 0;
}
