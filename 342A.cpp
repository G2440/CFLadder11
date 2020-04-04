//Ladder11--:>Xenia and Divisors

#include<iostream>
using namespace std; 
 int main (){
      

     int x; 
     cin>>x;
     int arr[x];
     int arr1[8] = {0};
     for(int i =0 ; i < x;i++){
     cin>>arr[i];
     int t = arr[i];
     arr1[t]++;
     }
     int f =0;
     int y = x/ 3;
     int arr2[x];
     int j = 0 ;
     if(x%3==0){
     while(y-- && j<x ){
         if(arr1[1] !=0 && arr1[2] !=0 && arr1[4] !=0){
             arr2[j] = 1 ; arr2[j+1] = 2;arr2[j+2] = 4;
             j +=3;
             arr1[1]--;arr1[2]--;arr1[4]--;
             f++;
         }
         else if(arr1[1] !=0 && arr1[2] !=0 && arr1[6] !=0){
             arr2[j] = 1 ; arr2[j+1] = 2;arr2[j+2] = 6;
             j +=3;
             arr1[1]--;arr1[2]--;arr1[6]--;
             f++;
         }
         else if(arr1[1] !=0 && arr1[3] !=0 && arr1[6] !=0){
              arr2[j] = 1 ; arr2[j+1] = 3;arr2[j+2] = 6;
              j +=3;
              arr1[1]--;arr1[3]--;arr1[6]--;
              f++;
         }
     }
     if(f!=x/3)
     cout<<-1<<endl;
     else{
         for(int i = 0 ; i < x;i=i+3)
             cout<<arr2[i]<<" "<<arr2[i+1]<<" "<<arr2[i+2]<<endl;
         

     }
     }
     else   
     cout<<-1<<endl;

     return 0;
 }