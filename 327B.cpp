//Ladder11--:>Hungry Sequence
#include<iostream>
using namespace std;
 
 
 
int main(){
    
    int x;
    cin>>x;
    int  i = 2;
    int count;
    int p =0;
    int arr[x];
    while(x>p && i < 10000000){
    for (int l = 2; l <= i; l++) 
      if ( i% l == 0) 
         count++;
      
  
    if(count == 1){
    arr[p] = i;
    p++;
    }
    count =0;
    i++;
    }
    for(int m=0;m<x;m++)
    cout<<arr[i]<<" ";
     return 0;   
}