#include "FIFO.h"
#include <iostream>

FIFO::FIFO() {
    head = nullptr;
    end = nullptr;
}

void FIFO::addNode(int value) {
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = nullptr;
    nodeNumber++;
    if(nodeNumber == 1){
        head = new_node;
    }
    else{
        end->next = new_node;
    }
    end = new_node;
    std::cout<<"Node of with the value of " << value << " has been added to the FIFO structure." << std::endl;
}

void FIFO::popNode(int& value) {
    value = head->value;
    Node* aux = head;
    if(head == end){
        head = nullptr;
        end = nullptr;

    }else{
        head = head->next;
    }
    delete aux;
    std::cout << "Node of value " << value << " has been eliminated\n";
}



