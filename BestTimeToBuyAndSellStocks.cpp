// #include <bits/stdc++.h>
// https://www.codingninjas.com/codestudio/problems/stocks-are-profitable_893405?topList=striver-sde-sheet-problems&leftPanelTab=0
// typedef int ll;
// int maximumProfit(vector<int> &prices)
// {
//     ll n = prices.size();
//     ll curmax = -1e9;
//     ll maxdiff = 0;
//     for (ll i = n - 1; i > -1; i--)
//     {
//         curmax = max(curmax, prices[i]);
//         maxdiff = max(maxdiff, curmax - prices[i]);
//     }
//     return maxdiff;
// }