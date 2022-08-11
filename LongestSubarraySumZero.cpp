// #include <bits/stdc++.h> 
// // https://www.codingninjas.com/codestudio/problems/longest-subset-zero-sum_920321?topList=striver-sde-sheet-problems
// int LongestSubsetWithZeroSum(vector < int > arr) {
//     map<int,int> first;
//     map<int,int> last;
//     int n=arr.size();
//     first[0]=0;
//     for(int i=1;i<n;i++){
//         arr[i]+=arr[i-1];
//     }
//     for(int i=0;i<n;i++){
//         if(!first[arr[i]]){
//             first[arr[i]]=i+1;
//         }
//         last[arr[i]]=i+1;
//     }
//     int cnt=0;
//     for(auto it:first){
//         if(it.first==0){
//             cnt=max(cnt,last[it.first]);
//         }
//         else
//         cnt=max(cnt,last[it.first]-it.second);
//     }
    
//     return cnt;

// }