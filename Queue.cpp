
#include "Queue.h"

Queue::Queue() {
    first = nullptr;
    last = nullptr;
}

void Queue::add(NodeTree *node) {
    NodeQueue* temp = new NodeQueue(node);

    if (first == nullptr) {
        first = temp;
        last = temp;
        return;
    }

    last->next = temp;
    last = temp;
}

NodeTree *Queue::pop() {
    if (first == nullptr) {
        return nullptr;
    }

    NodeQueue* temp = first;
    NodeTree* x = first->data;

    first = first->next;
    temp->next = nullptr;
    delete temp;

    return x;
}
