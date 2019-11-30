//
// Created by poiza on 10/27/19.
//

#include "BinarySearchTree.h"
#include <iostream>
using std::cout;

BST::BST(){
    tree = NULL;
}

void BST::cleanMemory(node* note) {
    if (note != NULL)
    {
        cleanMemory(note->left);
        cleanMemory(note->right);
        delete note;
    }
}
/*
BST::~BST(){
    cleanMemory(tree);
    tree = NULL;
}
*/
node* BST::createNewLeaf(int data) {
    node* leaf = new node;
    leaf->data = data;
    leaf->left = NULL;
    leaf->right = NULL;
    return leaf;
}

void BST::showForvard(node* note){
    if(note == NULL)
        return;
    cout << note->data;
    showForvard(note->left);
    showForvard(note->right);
}

void BST::showForvard() {
    cout<<"tree(Forvard) : ";
    showForvard(tree);
    cout<<'\n';
}

void BST::showSymmetry(node* note){
    if (note == NULL)
        return;
    showSymmetry(note->left);
    cout<<note->data;
    showSymmetry(note->right);
}

void BST::showSymmetry(){
    cout<<"tree(Symmetry) : ";
    showSymmetry(tree);
    cout<<'\n';
}

void BST::showReverse(node* note){
    if (note == NULL)
        return;
    showReverse(note->left);
    showReverse(note->right);
    cout << note->data;
}

void BST::showReverse() {
    cout<<"tree(Reverse) : ";
    showReverse(tree);
    cout<<'\n';
}

node* BST::searchLeaf(node *note, int data) {
    if (note == NULL)
        return NULL;
    else if (note->data == data)
        return note;
        else if (data <= note->data)
            return(searchLeaf(note->left , data));
            else return(searchLeaf(note->right , data));
}

node* BST::insertLeaf(node *note, int data) {
    if (note == NULL)
        note = createNewLeaf(data);
    else if (data <= note->data)
        note->left = insertLeaf(note->left, data);
        else note->right = insertLeaf(note->right, data);
}
void BST::insertLeaf(int data) {
    tree = insertLeaf(tree, data);
}

void BST::erase(int data){
    erase(tree, searchLeaf(tree,data) );
}
void BST::erase(node* p1, node* p2){
    node* p = p2->left;
    while (p->right->right != NULL)
        p = p->right;
        node* buf = p->right;
        p2->data = buf->data;
        buf->left==NULL?p->right=NULL:p->right=buf->left;
        p->left = NULL;
        delete buf;
}













