// #include <bits/stdc++.h>
// https://www.codingninjas.com/codestudio/problems/count-subarrays-with-given-xor_1115652?topList=striver-sde-sheet-problems&leftPanelTab=0
// int subarraysXor(vector<int> &arr, int x)
// {
//     int n = arr.size();
//     int xora = 0;
//     map<int, int> m;
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xora ^= arr[i];
//         if (xora == x)
//         {
//             cnt++;
//         }
//         if (m[xora ^ x])
//         {
//             cnt += m[xora ^ x];
//         }
//         m[xora]++;
//     }
//     return cnt;
// }