// // #include <bits/stdc++.h>
// // https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_800332?topList=striver-sde-sheet-problems&leftPanelTab=1
// /************************************************************

//     Following is the linked list node structure.

//     template <typename T>
//     class Node {
//         public:
//         T data;
//         Node* next;

//         Node(T data) {
//             next = NULL;
//             this->data = data;
//         }

//         ~Node() {
//             if (next != NULL) {
//                 delete next;
//             }
//         }
//     };

// ************************************************************/

// Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
// {
//     if (first == NULL)
//     {
//         return second;
//     }
//     if (second == NULL)
//     {
//         return first;
//     }
//     if (first->data <= second->data)
//     {
//         first->next = sortTwoLists(first->next, second);
//         return first;
//     }
//     else
//     {
//         second->next = sortTwoLists(first, second->next);
//         return second;
//     }
// }
