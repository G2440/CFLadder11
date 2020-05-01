//Ladder11--:>Sereja and Suffixes
#include<iostream>

using namespace std;
 int dp[100001] = {0};
int main(){

    int n,m;
    cin>>n>>m;
    int count=0;
    int arr[n];
    for(int i =0 ; i < n;i++){
    cin>>arr[i];
    }
    int arr1[n];
    int main = 0;
    for(int i=n-1;i>=0;i--){
        if(dp[arr[i]]==0){
            arr1[i] = 1 + main;
            main++;
            dp[arr[i]]++;
        }
        else{
            arr1[i] = arr1[i+1];
        }
    }
    for(int i = 0; i<m;i++){
        cin>>count;
        cout<<arr1[count-1]<<endl;
    }

    return 0;
}