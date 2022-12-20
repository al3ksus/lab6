#include <iostream>
#include <fstream>
#include <string>
#include "Tree.h"

using namespace std;

int main() {

    Tree tree;

    tree.filling();

    string str;

    ifstream fileA("D:\\clion\\projects\\labsYAMP\\lab6diana\\A.txt");
    ofstream fileC("D:\\clion\\projects\\labsYAMP\\lab6diana\\C.txt");

    while (!fileA.eof()) {
        fileA >> str;

        if (!tree.search(tree.root, str)) {
            fileC << str << ' ';
        }
    }

    fileA.close();
    fileC.close();

    return 0;
}
