// #include <bits/stdc++.h>
// https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_1170520?topList=striver-sde-sheet-problems&leftPanelTab=0
// /****************************************************************

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
//             int data;
//             Node *next;
//             Node(int data)
//             {
//                 this->data = data;
//                 this->next = NULL;
//             }
//         };

// *****************************************************************/

// Node *addTwoNumbers(Node *head1, Node *head2)
// {
//     Node *ans = new Node(0);
//     Node *store = ans;
//     Node *temp = ans;
//     Node *a = head1;
//     Node *b = head2;

//     int carry = 0;

//     while (a != NULL && b != NULL)
//     {
//         int sum = a->data + b->data + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         Node *tempAns = new Node(sum);
//         ans->next = tempAns;
//         ans = tempAns;
//         a = a->next;
//         b = b->next;
//     }

//     while (a != NULL)
//     {
//         int sum = a->data + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         Node *tempAns = new Node(sum);
//         ans->next = tempAns;
//         ans = tempAns;
//         a = a->next;
//     }
//     while (b != NULL)
//     {
//         int sum = b->data + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         Node *tempAns = new Node(sum);
//         ans->next = tempAns;
//         ans = tempAns;
//         b = b->next;
//     }
//     if (carry)
//     {
//         ans->next = new Node(carry);
//     }

//     return store->next;
//     // Write your code here.
// }