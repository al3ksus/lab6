#include "NodeQueue.h"

NodeQueue::NodeQueue() {
    data = nullptr;
    next = nullptr;
}

NodeQueue::NodeQueue(NodeTree *data_) {
    data = data_;
    next = nullptr;
}
