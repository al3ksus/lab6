#pragma once
#include "NodeTree.h"

class NodeQueue {
public:
    NodeTree* data;
    NodeQueue* next;

    NodeQueue();

    NodeQueue(NodeTree* data_);
};