#include "FIFO.h"
#include <iostream>

FIFO::FIFO() {
    n1 = nullptr;
}

void FIFO::addNode(int value) {
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = n1;
    n1 = new_node;
    std::cout<<"Node of with the value of " << value << " has been added to the FIFO structure." << std::endl;
}
