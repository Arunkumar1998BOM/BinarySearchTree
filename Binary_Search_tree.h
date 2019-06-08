//
// Created by ak47a on 08-06-2019.
//

#ifndef BINARYSEARCHTREE_BINARY_SEARCH_TREE_H
#define BINARYSEARCHTREE_BINARY_SEARCH_TREE_H
#include <vector>
using namespace std;
struct tree_node{
    tree_node *left;
    tree_node *right;
    int data;
    char character;

};
tree_node *root;

class bst{

public:
    int no_of_elements;
    int elements[100];
    char characters[100];
    void get_array();
    void sortit();
    void display(tree_node *t);
private:


    void insert1(int data);
    void insert1(char data);
    tree_node *insert2(tree_node *temp, tree_node *newnode);

};
#endif //BINARYSEARCHTREE_BINARY_SEARCH_TREE_H
