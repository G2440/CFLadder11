//Ladder11--:>Sereja and Bottles
#include<iostream>
using namespace std;

int main(){
    
    int x;
    cin>>x;
    int arr1[x],arr2[x];
    for(int  i =0 ; i< x;i++)
    cin>>arr1[i]>>arr2[i];
    int p =0;
    for(int i =0;i<x;i++)
    for(int j =0;j<x;j++)
    if(arr1[i] == arr2[i] && i!=j){
    p++;
    break;
    }

    cout<<x-p<<endl;


    return 0;   
}