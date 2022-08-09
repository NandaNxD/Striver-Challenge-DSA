//  #include <bits/stdc++.h>
// // https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_1089580?topList=striver-sde-sheet-problems&leftPanelTab=0
//  typedef long long ll;
//  vector<vector<long long int>> printPascal(int n)
//  {
//      vector<vector<ll>> v(n);
//      ll cnt = 1;
//      for (ll i = 0; i < n; i++)
//      {
//          for (ll j = 0; j < cnt; j++)
//          {
//              v[i].push_back(1);
//          }
//          cnt++;
//      }
//      if (n == 1 || n == 2)
//      {
//          return v;
//      }
//      for (ll i = 2; i < n; i++)
//      {
//          for (ll j = 1; j < i; j++)
//          {
//              v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
//          }
//      }
//      return v;

//     // Write your code here.
// }
