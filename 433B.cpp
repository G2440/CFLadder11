//Ladder11-->Kuriyama Mirai's Stones

#include<bits/stdc++.h>
#define ulli unsigned long long int
using namespace std;

int main(){
    

    ulli x;
    cin>>x;
    int arr[x];
    int arr1[x];
    for(int i =0 ; i < x; i++){
    cin>>arr[i];
    arr1[i] = arr[i];
    }
    
    ulli p1[x];
    ulli  p2[x];
    p1[0] = arr[0];

    for(int i =1 ; i < x; i++)
    p1[i] = arr[i] + p1[i-1];
    

    
    sort(arr,arr+x);

    p2[0] = arr[0];

    for(int i =1 ; i < x; i++)
    p2[i] = arr[i] + p2[i-1];
    
    ulli y; 
    cin>>y;
    int three[3];
    while(y--){
        for(int i =0 ; i < 3 ;i++)
        cin>>three[i];
    
        if(three[0] == 1){
            ulli ans = p1[three[2] - 1] -  p1[three[1]-1] + arr1[three[1] - 1];
            cout<<ans<<endl;
        }
        else if(three[0] ==2){
            ulli ans = p2[three[2] - 1] -  p2[three[1]-1] + arr[three[1] - 1];
            cout<<ans<<endl;
        }
    }


    return 0;
}
