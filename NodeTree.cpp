#include "NodeTree.h"

NodeTree::NodeTree(const string &data_) {
    data = data_;
    left = nullptr;
    right = nullptr;
}

NodeTree::NodeTree() {
    data = "";
    left = nullptr;
    right = nullptr;
}
