#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ll int x;
    cin>>x;
    int arr[x];
    for(int i =0 ; i < x; i++)
    cin>>arr[i];
    bool arr1[x];
    for(int i =0 ; i < x;i++)
    arr1[i] = 1;
    sort(arr,arr+x);  
    for(int i =0 ; i<x ; i++)
    if(arr[i] > 0)
    arr1[i] = 0;
    
    int count =0;
    for(int i =0 ; i < x ; i++){
        if(arr1[i] !=0){
            if(arr[i] < 0){
                int temp1 = 0 - arr[i];
                int temp2 = i + temp2;
                count += temp2;
                arr1[i] = 0; 
            }
            else{
                int temp1 = i - arr[i];
                count += temp1;
                arr1[i] = 0;
            }
        }
    }

    cout<<count<<endl;


    return 0;
}