// #include <bits/stdc++.h>
// https://www.codingninjas.com/codestudio/problems/pair-sum_697295?topList=striver-sde-sheet-problems&leftPanelTab=0
// vector<vector<int>> pairSum(vector<int> &arr, int s)
// {
//     unordered_map<int, int> m;
//     vector<vector<int>> ans;
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         m[arr[i]]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (m[s - arr[i]])
//         {
//             int cnt = m[arr[i]] * m[s - arr[i]];
//             if (arr[i] == s - arr[i])
//             {
//                 cnt = m[arr[i]] * (m[arr[i]] - 1);
//                 cnt /= 2;
//             }

//             m[arr[i]] = 0;
//             m[s - arr[i]] = 0;

//             for (int j = 0; j < cnt; j++)
//             {
//                 vector<int> temp;

//                 temp.push_back(arr[i]);
//                 temp.push_back(s - arr[i]);
//                 ans.push_back(temp);
//             }
//         }
//     }
//     // cout<<ans.size()<<endl;
//     return ans;
// }