//#include<bits/stdc++.h>
// using namespace std;
// https://www.codingninjas.com/codestudio/problems/subset-sum_3843086?topList=striver-sde-sheet-problems&leftPanelTab=0
// vector<int> ans;
// void generate(int n,vector<int> &a,int sum){
//     if(n==0){
//         ans.push_back(sum);
//         return;
//     }
//     generate(n-1,a,sum+a[n-1]);
//     generate(n-1,a,sum);
// }
// vector<int> subsetSum(vector<int> &num)
// {
//     ans.clear();
//     generate(num.size(),num,0);
//     sort(ans.begin(),ans.end());
//     return ans;
//     // Write your code here.
// }