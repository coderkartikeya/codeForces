#include <iostream>
using namespace std;
#include <vector>


int dfs(int *arr,int i,int n,int size,vector<int>&dp){
    if(i==size || n<0) return INT_MAX-1;
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int take=1+dfs(arr,i,n-arr[i],size,dp);
    int skip=dfs(arr,i+1,n,size,dp);

    dp[n]=min(take,skip);
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    int arr[]={1,5,10,20,100};
    int ans=dfs(arr,0,n,5,dp);
    cout<<ans<<endl;
}