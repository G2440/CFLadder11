//Ladder11--:>Hungry Sequence
#include<iostream>
using namespace std;

int check(int x , int *a,int w);

int main(){
    

    int x;
    cin>>x;
    int  i = 2;
    int arr[x];

    arr[0] = 2;
    int a =1;
    while(a<x){
       if( check(i,arr,a)){
           arr[a] = i;
           i++;
           a++; 
       }
       else
       i++;
    }

    for(int j =0 ; j < x;j++)
    cout<<arr[j]<<" ";
    return 0;
}

int check(int x,int *a,int w){
    for(int j = 0; j<w;j++)
    if(x%a[j]==0)
    return 0;
    
   return 1; 
}