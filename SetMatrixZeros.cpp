//#include <bits/stdc++.h>
// //https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems&leftPanelTab=0
// void setZeros(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     int m = matrix[0].size();
//     int row = 0;
//     int col = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 if (i == 0)
//                 {
//                     row = 1;
//                 }
//                 if (j == 0)
//                 {
//                     col = 1;
//                 }
//                 matrix[0][j] = 0;
//                 matrix[i][0] = 0;
//             }
//         }
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j < m; j++)
//         {
//             if (matrix[i][0] == 0 || matrix[0][j] == 0)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     if (col)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             matrix[i][0] = 0;
//         }
//     }
//     if (row)
//     {
//         for (int i = 0; i < m; i++)
//         {
//             matrix[0][i] = 0;
//         }
//     }
// }
