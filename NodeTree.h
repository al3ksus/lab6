#pragma once
#include <string>

using namespace std;

class NodeTree {
public:
    string data;
    NodeTree* left;
    NodeTree* right;

    NodeTree();

    NodeTree(const string &data_);
};

