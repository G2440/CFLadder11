//Ladder11--:>Pashmak and Flowers
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int x;
    cin>>x;
    int arr[x];
    for(int i =0 ; i < x; i++){
    cin>>arr[i];
    }
    sort(arr,arr+x);
    long long int a = arr[0];
    long long int b = arr[x-1];
    long long int min =0 , max =0;
    if(a==b){
        unsigned long long int l = (x*(x-1))/2;
        cout<<0<<" "<<l<<endl;
    }
    else{
     for(int i =0 ; i < x ; i++){
        if(arr[i] == a)
        min++;
        if(arr[i] == b)
        max++;
    }
    unsigned long long int count =0;
    count = min*max;
    long long int ans1 = arr[x-1] - arr[0];
    cout<<ans1<<" "<<count<<endl;
    }
    return 0;
}
