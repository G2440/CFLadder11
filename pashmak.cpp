//Ladder11--:>Pashmak and Flowers

#include<bits/stdc++.h>
using namespace std; 
int main(){
    
    long long int x;
    cin>>x;
    int arr[x];
    for(int i =0 ; i < x; i++)
    cin>>arr[i];

    sort(arr,arr+x);

    long long int ans1 = arr[x-1] - arr[0];
    long long int count =0; 
    for(int i =0 ; i < x;i++){
        for(int j =i+1 ; j < x ; j++){
            if(arr[j] - arr[i] == ans1)
            count++;
        }       
    }
    cout<<ans1<<" "<<count<<endl;
    
    return 0;
}