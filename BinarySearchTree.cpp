#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *left=NULL;
    Node *right=NULL;

    Node(int data){
        this->data=data;
    }
    
};

class Tree{
public:
    Node* root;
    
    Tree(int data){
        root=new Node(data);
    }
    bool isEmpty(){
        if(root==NULL){
            return true;
        }
        return false;
    }
    void insertRoot(Node* temp,int data){
        if(temp==NULL){
            temp=new Node(data);
        }
        if(temp->data==data){
            return;
        }
        else if(temp->data>data){
            insertRoot(temp->left,data);
        }
        else{
            insertRoot(temp->right, data);
        }
    }

    void insert(int data){
        if(root==NULL){
            root=new Node(data);
            return;
        }

        if(root->data>data){
            insertRoot(root->left,data);
        }
        else if(root->data==data){
            return;
        }
        else{
            insertRoot(root->right,data);
        }
        
    }
    Node* getAncestor(int data){
        if(root==NULL){

        }
    }
    int remove(int data){

    }
    int getMin(){

    }   
    int getMax(){

    }
    
    void print(Node* temp){
        if(temp!=NULL){
            cout<<temp->data<<" ";
        }
        if(temp->left!=NULL){
            print(temp->left);
        }
        if(temp->right!=NULL){
            print(temp->right);
        }
    }

};

int main(){
    Tree t(1);
    t.print(t.root);
}