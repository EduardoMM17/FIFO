#include <iostream>
#include "FIFO.h"

void addNodes(int, FIFO*&);

int main() {
    int val, numberOfNodes;
    std::cout <<"Enter the number of nodes you want to have in your FIFO structure: "; std::cin >> numberOfNodes;
    FIFO* F1 = new FIFO();
    addNodes(numberOfNodes,F1);
    F1->popNode(val);
    F1->popNode(val);
    F1->popNode(val);
    /*while(F1->head != nullptr){
        F1->popNode(val);
        if(F1->head != nullptr){
            std::cout << val <<" , ";
        }
        else{
            std::cout << val << " . ";
        }
    }*/
}

void addNodes(int numberOfNodes, FIFO*& F){
    int val;
    for(int i = 0; i < numberOfNodes; i++){
        std::cout <<"Enter a value: "; std::cin >> val;
        F ->addNode(val);
    }
}