//Ladder11--:>Big Segment

#include<iostream>
typedef unsigned long long int ulli; 
using namespace std;
int main(){
      

    ulli x;
    cin>>x;
    int arr1[x];
    int arr2[x];
    for(int i =0 ; i < x ; i++)
    cin>>arr1[i]>>arr2[i];
    int max = arr2[0];
    unsigned long long int min = 100000000000;
    int var=0;
    for(int i =0;i<x;i++)
    if(max<arr2[i])
    max = arr2[i];
    for(int i = 0; i < x; i++)
    if(arr2[i] == max && arr1[i] < min ){
    min = arr1[i];
    var = i+1;
    }
   
    int flag =0;
    for(int i =0 ; i < x;i++)
        if((arr1[var-1]<=arr1[i])&&(arr1[i]<=arr2[i])&&(arr2[i]<=arr2[var-1]))
        continue;
        else{ 
        flag =1;
        break;
        }
    
    if(flag == 1)
    cout<<-1<<endl;
    else   
    cout<<var<<endl;

    return 0; 
}