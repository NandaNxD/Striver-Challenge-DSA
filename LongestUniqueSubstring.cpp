// #include <bits/stdc++.h>
// https://www.codingninjas.com/codestudio/problems/longest-unique-substring_630418?topList=striver-sde-sheet-problems&leftPanelTab=0
// int uniqueSubstrings(string input)
// {
//     map<int, int> m;
//     int mx = 0;
//     int diff = 1;
//     int n = input.length();
//     for (int i = 0; i < n; i++)
//     {
//         if (m[input[i]])
//             mx = max(mx, m[input[i]]);
//         m[input[i]] = i + 1;
//         diff = max(diff, i + 1 - mx);
//     }
//     return diff;
// }