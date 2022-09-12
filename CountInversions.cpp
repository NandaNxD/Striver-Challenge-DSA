// #include <bits/stdc++.h>
// // https://www.codingninjas.com/codestudio/problems/count-inversions_615?topList=striver-sde-sheet-problems&leftPanelTab=0
// typedef long long ll;

// ll merge(ll *a,int l,int m,int r){
//     ll n1=m-l+1;
//     ll n2=r-m;
//     ll a1[n1];
//     ll a2[n2];
//     ll inv=0;
    
//     for(int i=0;i<n1;i++){
//         a1[i]=a[l+i];
//     }
   
//     for(int j=0;j<n2;j++){
//         a2[j]=a[j+m+1];
//     }
//     int i=0,j=0,k=l;
    
//     while(i<n1 && j<n2){
//         //cout<<a1[i]<< " "<<a2[j]<<endl;
//         if(a1[i]<=a2[j]){
//             a[k++]=a1[i++];
//         }
//         else{
//             a[k++]=a2[j++];
//             inv+=n1-i;
//         }
//     }
//     while(i<n1){
//         a[k++]=a1[i++];
//     }
//     while(j<n2){
//         a[k++]=a2[j++];
//     }
//     return inv;
    
// }

// ll mergeSort(ll *a,int l,int r){
//     int inv=0;
//     if(l<r){
//         int mid=(l+r)/2;        
//         inv+=mergeSort(a,l,mid);
//         inv+=mergeSort(a,mid+1,r);
//         inv+=merge(a,l,mid,r);
//     }
//     return inv;
// }
// long long getInversions(long long *a, int n){
//     return mergeSort(a,0,n-1);
// }
