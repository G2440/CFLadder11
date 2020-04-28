#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main(){

    ll int x;
    cin>>x;
    int arr[x];
    for(int i =0 ; i < x; i++)
    cin>>arr[i];
    sort(arr,arr+x);  
    
    unsigned long long int count = 0; 
    for(int i =0 ; i< x; i++){
        if(arr[i] != i+1){
            if(arr[i]<0){
                unsigned long long int temp1 = 0 - arr[i];
                unsigned long long int temp2 = i+1 + temp1;
                count += temp2;
            }
            else{
                unsigned long long int temp  = abs((i+1) - arr[i]);
                count += (temp); 
            }
        }
    }
    cout<<count<<endl;

    return 0;
}