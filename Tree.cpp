#include "Tree.h"
#include "Queue.h"
#include <fstream>

Tree::Tree() {
root = nullptr;
}

void Tree::filling() {
    string s;
    Queue queue;
    NodeTree* temp;
    ifstream file("D:\\clion\\projects\\labsYAMP\\lab6diana\\B.txt");

    if (file.is_open()) {

        file >> s;
        root = new NodeTree(s);
        root->left = new NodeTree();
        root->right = new NodeTree();
        queue.add(root->left);
        queue.add(root->right);

        while(!file.eof()) {
            file >> s;
            temp = queue.pop();
            temp->data = s;
            temp->left = new NodeTree();
            temp->right = new NodeTree();
            queue.add(temp->left);
            queue.add(temp->right);
        }
    }

    file.close();
}

bool Tree::search(NodeTree *node, const string &s) {
    if (s == node->data) {
        return true;
    }

    if (node->data == "") {
        return false;
    }

    bool f;

    f = search(node->left, s);

    if (!f) {
        return search(node->right, s);
    }
    else {
        return f;
    }
}
