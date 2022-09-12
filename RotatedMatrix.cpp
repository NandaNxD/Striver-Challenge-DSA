// #include <bits/stdc++.h>
// // https://www.codingninjas.com/codestudio/problems/rotate-matrix_981260?topList=striver-sde-sheet-problems
// void rotateMatrix(vector<vector<int>> &mat, int n, int m)
// {
//     int row = 0;
//     int col = 0;
//     int rowlimit = n - 1;
//     int colimit = m - 1;
//     while (row < n / 2 && col < m / 2)
//     {
//         for (int i = row + 1; i <= rowlimit; i++)
//             swap(mat[i][col], mat[i - 1][col]);
//         for (int i = col + 1; i <= colimit; i++)
//             swap(mat[rowlimit][i], mat[rowlimit][i - 1]);
//         for (int i = rowlimit; i > row; i--)
//             swap(mat[i][colimit], mat[i - 1][colimit]);
//         for (int i = colimit; i > col + 1; i--)
//             swap(mat[row][i], mat[row][i - 1]);

//         row++, col++;
//         rowlimit--, colimit--;
//     }
// }