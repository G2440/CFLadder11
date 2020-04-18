//Ladder11--:>Fence

#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int arr[x];
    for(int i =0 ; i < x; i++)
    cin>>arr[i];
    for(int i =0 ; i< x; i++){
        if(i==0)
        continue;
        else{
            arr[i] = arr[i] + arr[i-1];
        }
    }
    int p = x-y+1;
    int min = arr[y-1];
    int ind=1;
    int ans =1;
    for(int i =0 ;i<p;i++){
        if(y+i <x){
            ind++;
        if(min>(arr[y+i]-arr[i])){
        min= arr[y+i] - arr[i];
        ans = ind; 
        }
        }
        else 
        break;
    }    
   
    cout<<ans<<endl;
    return 0;
}