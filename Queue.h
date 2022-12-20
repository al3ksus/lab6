#pragma once
#include "NodeQueue.h"

class Queue {
public:
    NodeQueue* first;
    NodeQueue* last;

    Queue();

    void add(NodeTree* node);

    NodeTree* pop();
};

