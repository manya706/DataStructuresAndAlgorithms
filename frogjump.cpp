#include<bits/stdc++.h>
using namespace std;
int jump(vector<int> &arr,int i, vector<int> &dp){
    if(i==0) return 0;
    // vector<int> dp[4,-1];
    int r=INT_MAX;
    if(dp[i] != -1) return dp[i];

    int l = jump(arr,i-1,dp)+abs(arr[i]-arr[i-1]);
    if(i>1){
        r = jump(arr,i-2,dp)+abs(arr[i]-arr[i-2]);
    }
 
    return dp[i]=min(l,r);
}
int main(){
    vector<int> arr = {10,30,20,10};
    int n = 4;
    vector<int> dp(n+1,-1);
    // int n=4;
    int i=0;
    cout<<jump(arr,n-1,dp);
}