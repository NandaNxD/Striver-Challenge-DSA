// #include <bits/stdc++.h>
// // https://www.codingninjas.com/codestudio/problems/ninja-and-sorted-arrays_1214628?topList=striver-sde-sheet-problems&leftPanelTab=0
// vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
// {
//     while (arr1[m - 1] == 0)
//     {
//         m--;
//     }

//     int i = m - 1;
//     int j = 0;
//     vector<int> a;

//     while (i > -1 && j < n)
//     {
//         if (arr1[i] > arr2[j])
//         {
//             swap(arr1[i], arr2[j]);
//             i--;
//         }
//         else
//         {
//             j++;
//         }
//     }
//     sort(arr1.begin(), arr1.begin() + m);
//     sort(arr2.begin(), arr2.end());
//     for (int i = 0; i < m; i++)
//     {
//         a.push_back(arr1[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         a.push_back(arr2[i]);
//     }
//     return a;
// }