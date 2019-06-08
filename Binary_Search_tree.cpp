//
// Created by ak47a on 08-06-2019.
//

#include "Binary_Search_tree.h"
#include <iostream>

using namespace std;

void bst::get_array() {
    //This is a function where you take in the data
    cout<<"PLease enter the number of elements"<<endl;
    cin>>no_of_elements;
    cout<<"Please enter all the integers"<<endl;
    //Un-comment this code to work with integers (sorting integers)
//    for (int i=0;i<no_of_elements;i++)
//    {
//        cin>>elements[i];
//    }

//This is to work with characters
    for (int i=0;i<no_of_elements;i++)
    {
        cin>>characters[i];
    }

}

//This function is simply to put the elements into the insert1 function
void bst::sortit() {
    //This is to insert the characters into the tree

    for (int i=0;i<no_of_elements;i++){
        insert1(characters[i]);
    }

}

//this function will create the node, allocate the memory , and point to the NULLS (in basic manner) (this is for the characters)
void bst::insert1(char data) {
    //create a node tree temp and assign root to it, and create a new node called newnode
    tree_node *temp=root,*newnode;
    newnode=new tree_node;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->character=data;
    root=insert2(temp,newnode);
}

//this function will create the node, allocate the memory , and point to the NULLS (in basic manner) (this is for the integers)
/*
void bst::insert1(int data) {
    //create a node tree temp and assign root to it, and create a new node called newnode
    tree_node *temp=root,*newnode;
    newnode=new tree_node;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=data;
    root=insert2(temp,newnode);
}
*/



//this function fits in created node somewhere based on the situation
tree_node *bst::insert2(tree_node *temp, tree_node *newnode) {
    //Temp actually points to root
    //if root points to NULL, then allocate new node
    if(temp==NULL)
    {
        //if your root points to NULL, then whatever node you were trying to place (newnode), assign that to the root
        //basically, everytime you traverse, your root also keeps traversing
        //So at this point, you have reached the end of the tree
        temp=newnode;
    }
    else if(newnode->character>temp->character){
        //place it at the right
        insert2(temp->right,newnode);
        if(temp->right==NULL)
            temp->right=newnode;
    }
    else
    {
        //place it at the left
        insert2(temp->left,newnode);
        if(temp->left==NULL)
            temp->left=newnode;


    }

    //*************************DONT FORGET TO RETURN THE ROOT ELSE YOU WONT BE ABLE TO OONNECT THE NODES
    return temp;
}


void bst::display(tree_node *t=root) {

    if(root==NULL){
        cout<<"Nothing to display";

    }
    else if(t!=NULL)
    {

        //print in inorder manner
        display(t->left);
        cout<<t->character<<endl;
        display(t->right);

    }
}