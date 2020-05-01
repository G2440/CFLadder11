//Ladder11--:>Sereja and Suffixes
#include<iostream>

using namespace std;
 int dp[100001] = {0};
int main(){

    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i =0 ; i < n;i++){
    cin>>arr[i];
    dp[arr[i]]++;
    }
    while(m--){
        int x;
        cin>>x;
        int count =0;
        int data = arr[x-1];
        for(int i = 1 ;i<100001;i++)
        if(dp[i] !=0)
        count++;
        dp[data]--;
        cout<<count<<endl;
    }
    return 0;
}