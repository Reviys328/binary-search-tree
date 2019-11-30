//
// Created by poiza on 10/27/19.
//

#ifndef BINARYSEARCHTREE_BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_BINARYSEARCHTREE_H

struct node {
    int data;
    node* left;
    node* right;
};
class BST{
    node* tree;
    void cleanMemory(node* note);
    void showForvard(node* note);
    void showSymmetry(node* note);
    void showReverse(node* note);
    node* searchLeaf(node* note, int data);
    node* insertLeaf(node* note, int data);
    void erase(node* p1, node* p2);
    void _delete();
public:
    BST();
//    ~BST();
    node* createNewLeaf(int data);
    void showForvard();
    void showSymmetry();
    void showReverse();
    void insertLeaf(int data);
    void erase(int data); //функция для вызова из main
};

#endif //BINARYSEARCHTREE_BINARYSEARCHTREE_H
