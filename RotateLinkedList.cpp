// #include <bits/stdc++.h>
// https://www.codingninjas.com/codestudio/problems/rotate-linked-list_920454?topList=striver-sde-sheet-problems&leftPanelTab=0
// /********************************

//     Following is the class structure of the Node class:
    
//     class Node
//     {
//     	public:
//     	    int data;
//     	    Node *next;
//     	    Node(int data)
//     	    {
//     	        this->data = data;
//     	        this->next = NULL;
//     	    }
//     };

// ********************************/


// Node *rotate(Node *head, int k) {
//     Node* temp=head;
//     int n=0;
//     while(temp!=NULL){
//         temp=temp->next;
//         n++;
//     }
//     k%=n;
    
//     if(k==0){
//         return head;
//     }
//     temp=head->next;
//     Node* ans;
//     Node* prev;
//     Node* x=head;
//     k=n-k;
//     while(k){
//         prev=x;
//         ans=temp;
//         temp=temp->next;
//         x=x->next;
//         k--;
//     }
//     prev->next=NULL;
  
//     temp=ans;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=head;
    
//     return ans;
// }