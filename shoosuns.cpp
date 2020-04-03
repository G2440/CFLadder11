//Ladder11--:>Shooshuns and Sequence 
#include<iostream>
using namespace std; 
int main(){

    int x , y;
    cin>>x>>y;
    int arr[y];
    int arr1[100000];
    for(int i =0 ; i < y;i++){
            cin>>arr[i];
            int temp = arr[i];
            arr1[temp]++;
    } 
    long int max =0 ;
    for(int i =0 ; i < 100000; i++)
        if(max < arr1[i])
        max = i ;
    long int ans =0 ;
    long int p = x;
    long int l =0;
    while(p--){
         long int g = arr[y];
         for(int i =0 ; i<x-1 ; i++ )
             arr[i] = arr[i+1];
         arr[x-1] = g;
           
    }


    return 0;
}