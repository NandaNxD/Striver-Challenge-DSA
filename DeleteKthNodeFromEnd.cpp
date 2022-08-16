// #include <bits/stdc++.h>
// https://www.codingninjas.com/codestudio/problems/delete-kth-node-from-end-in-linked-list_799912?topList=striver-sde-sheet-problems&leftPanelTab=0
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
// typedef LinkedListNode<int> *lni;

// LinkedListNode<int> *removeKthNode(LinkedListNode<int> *head, int k)
// {
//     if (k == 0 || head == NULL)
//     {
//         return head;
//     }
//     lni thead = new LinkedListNode<int>(1);
//     thead->next = head;
//     lni travelk = thead;
//     lni travelnk = thead;
//     for (int i = 0; i < k; i++)
//     {
//         travelk = travelk->next;
//     }
//     while (travelk->next != NULL)
//     {
//         travelk = travelk->next;
//         travelnk = travelnk->next;
//     }
//     travelnk->next = travelnk->next->next;
//     return thead->next;
// }