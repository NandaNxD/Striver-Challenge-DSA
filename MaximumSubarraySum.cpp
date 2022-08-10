// #include <bits/stdc++.h>
// https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_630526?topList=striver-sde-sheet-problems&leftPanelTab=0
// typedef long long ll;
// long long maxSubarraySum(int arr[], int n)
// {
//     ll cursum = 0;
//     ll mx = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         cursum += arr[i];
//         if (cursum <= 0)
//         {
//             cursum = 0;
//         }
//         if (mx < cursum)
//         {
//             mx = cursum;
//         }
//     }
//     return mx;
//     /*
//         Don't write main().
//         Don't read input, it is passed as function argument.
//         No need to print anything.
//         Taking input and printing output is handled automatically.
//     */
// }