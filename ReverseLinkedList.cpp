// #include <bits/stdc++.h>
// // https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897?topList=striver-sde-sheet-problems&leftPanelTab=0
// /****************************************************************

//     Following is the class structure of the LinkedListNode class:

//     template <typename T>
//     class LinkedListNode
//     {
//     public:
//         T data;
//         LinkedListNode<T> *next;
//         LinkedListNode(T data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };

// *****************************************************************/

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
// {
//     if (head == NULL)
//     {
//         return head;
//     }

//     if (head->next == NULL)
//     {
//         return head;
//     }

//     LinkedListNode<int> *first = head;
//     LinkedListNode<int> *second = head->next;
//     LinkedListNode<int> *temp = NULL;

//     while (second != NULL)
//     {
//         first->next = temp;
//         temp = first;
//         first = second;
//         second = second->next;
//     }
//     first->next = temp;
//     return first;
//     // Write your code here
// }