#include <iostream>
#include "BinarySearchTree.h"
using std::cout;
int main() {
    BST tree;
    tree.insertLeaf(9);
    tree.insertLeaf(5);

    tree.insertLeaf(7);
    tree.insertLeaf(3);
    tree.insertLeaf(4);
    tree.insertLeaf(4);
    tree.showSymmetry();
    tree.erase(5);
    tree.showSymmetry();
    tree.showForvard();
}