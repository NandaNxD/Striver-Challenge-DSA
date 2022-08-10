// #include <bits/stdc++.h>
// https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?topList=striver-sde-sheet-problems&leftPanelTab=0
// typedef long long ll;
// void sort012(int *arr, int n)
// {
//     ll low = 0;
//     ll mid = 0;
//     ll high = n - 1;
//     while (mid <= high)
//     {
//         if (arr[mid] == 0)
//         {
//             swap(arr[mid], arr[low]);
//             mid++;
//             low++;
//             continue;
//         }
//         if (arr[mid] == 1)
//         {
//             mid++;
//             continue;
//         }
//         if (arr[mid] == 2)
//         {
//             swap(arr[high], arr[mid]);
//             high--;
//             continue;
//         }
//     }
//     //   Write your code here
// }