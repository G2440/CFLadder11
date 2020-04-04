//Ladder11--:>Xenia and Divisors

#include<iostream>
using namespace std; 
 int main (){
      

     int x; 
     cin>>x;
     int arr[x];
     int arr1[7] = {0};
     for(int i =0 ; i < x;i++){
     cin>>arr[i];
     int t = arr[i];
     arr1[t]++;
     }
  
     int f =0;
     int y = x/ 3;
     if(x%3==0){
     while(y--){
         if(arr1[1] !=0 && arr1[2] !=0 && arr1[4] !=0){
             cout<<1<<" "<<2<<" "<<4<<endl;
             arr1[1]--;arr1[2]--;arr1[4]--;
             f++;
         }
         else if(arr1[1] !=0 && arr1[2] !=0 && arr1[6] !=0){
             cout<<1<<" "<<2<<" "<<6<<endl;
             arr1[1]--;arr1[2]--;arr1[6]--;
             f++;
         }
         else if(arr1[1] !=0 && arr1[3] !=0 && arr1[6] !=0){
             cout<<1<<" "<<3<<" "<<6<<endl;
             arr1[1]--;arr1[3]--;arr1[6]--;
             f++;
         }
     }
     if(f!=x/3)
     cout<<-1<<endl;
     }
     else   
     cout<<-1<<endl;

     return 0;
 }