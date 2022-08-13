// #include <bits/stdc++.h>
// // https://www.codingninjas.com/codestudio/problems/total-unique-paths_1081470?topList=striver-sde-sheet-problems
// int dp[100][100];
// int cnt = 0;
// int solve(int m, int n)
// {
//     if (m == 1 && n == 1)
//     {
//         return 1;
//     }
//     else if (m <= 0 || n <= 0)
//     {
//         return 0;
//     }
//     if (dp[m][n] != -1)
//     {
//         return dp[m][n];
//     }

//     return dp[m][n] = solve(m - 1, n) + solve(m, n - 1);
// }
// int uniquePaths(int m, int n)
// {
//     memset(dp, -1, sizeof(dp));
//     cnt = 0;
//     return solve(m, n);
//     return cnt;
// }
