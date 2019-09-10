#ifndef COLA_FIFO_H
#define COLA_FIFO_H

struct Node{
    int value;
    Node* next;
};

class FIFO {
private:
    int nodeNumber = 0;
public:
    Node* head;
    Node* end;
    FIFO();
    void addNode(int);
    void popNode(int&);
};


#endif //COLA_FIFO_H
