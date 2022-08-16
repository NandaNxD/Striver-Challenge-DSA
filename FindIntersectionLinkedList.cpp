// #include <bits/stdc++.h>
// https://www.codingninjas.com/codestudio/problems/intersection-of-linked-list_630457?topList=striver-sde-sheet-problems&leftPanelTab=0
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

// int findIntersection(Node *firstHead, Node *secondHead)
// {
//     //     unordered_map<Node*,int> m;
//     //     while(firstHead!=NULL){
//     //         m[firstHead]++;
//     //         firstHead=firstHead->next;
//     //     }
//     //     firstHead=secondHead;
//     //     while(firstHead!=NULL){
//     //         if(m[firstHead]){
//     //             return firstHead->data;
//     //         }
//     //         firstHead=firstHead->next;
//     //     }
//     //     return -1;
//     // Find the difference between the length of the linkedlists
//     if (firstHead == NULL || secondHead == NULL)
//     {
//         return -1;
//     }
//     Node *h1 = firstHead;
//     Node *h2 = secondHead;
//     while (h1 != h2)
//     {
//         if (h1 == NULL)
//         {
//             h1 = secondHead;
//         }
//         else
//         {
//             h1 = h1->next;
//         }
//         if (h2 == NULL)
//         {
//             h2 = firstHead;
//         }
//         else
//         {
//             h2 = h2->next;
//         }
//     }
//     if (h1 == NULL)
//         return -1;
//     return h1->data;

//     // Write your code here
// }