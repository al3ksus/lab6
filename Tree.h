#pragma once
#include "NodeTree.h"

class Tree {
public:
    NodeTree* root;

    Tree();

    void filling();

    bool search(NodeTree* node, const string& s);
};
