// #include <bits/stdc++.h>
// // https://www.codingninjas.com/codestudio/problems/next-permutaion_893046?topList=striver-sde-sheet-problems&leftPanelTab=3
// typedef long long ll;
// vector<int> nextPermutation(vector<int> &permutation, int n)
// {
//     if (n == 1)
//     {
//         return permutation;
//     }
//     ll flag = 0;
//     ll mn = 1e9;
//     ll pos = -1;

//     for (ll i = n - 1; i > 0; i--)
//     {
//         if (permutation[i] > permutation[i - 1])
//         {
//             flag = 1;
//             mn = permutation[i];
//             pos = i;
//             for (ll j = n - 1; j > (i - 1); j--)
//             {
//                 if (permutation[i - 1] < permutation[j] && mn > permutation[j])
//                 {
//                     pos = j;
//                     mn = permutation[j];
//                 }
//             }
//             swap(permutation[i - 1], permutation[pos]);
//             sort(permutation.begin() + i, permutation.end());
//             break;
//         }
//     }
//     if (!flag)
//     {
//         sort(permutation.begin(), permutation.end());
//     }
//     return permutation;
// }