// #include <bits/stdc++.h>
// https://www.codingninjas.com/codestudio/problems/merge-intervals_699917?topList=striver-sde-sheet-problems&leftPanelTab=0
// /*

//     intervals[i][0] = start point of i'th interval
//     intervals[i][1] = finish point of i'th interval

// */

// vector<vector<int>> mergeIntervals(vector<vector<int>> &a)
// {
//     int n = a.size();
//     vector<pair<int, int>> v;
//     for (int i = 0; i < a.size(); i++)
//     {
//         pair<int, int> p;
//         p.first = a[i][0];
//         p.second = a[i][1];
//         v.push_back(p);
//     }
//     sort(v.begin(), v.end());
//     int start = v[0].first;
//     int end = v[0].second;
//     vector<vector<int>> ans;
//     for (int i = 1; i < n; ++i)
//     {
//         if (v[i].first <= end)
//         {
//             end = max(v[i].second, end);
//         }
//         else
//         {
//             ans.push_back({start, end});
//             start = v[i].first;
//             end = v[i].second;
//         }
//     }
//     ans.push_back({start, end});
//     return ans;
//     // Write your code here.
// }
