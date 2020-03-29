//Ladder11--:>Little Elephant and Function 
#include <iostream>
using namespace std;
int* fun(int x,int*arr);
 int main(){
     int x;
     cin>>x;
     int lol = x;
     int arr[x];
     fun(x,arr);
  
    cout<<arr[lol-1]<<" ";
    for(int j = 0; j < lol-1; j++)
        cout<<arr[j]<<" ";
     return 0;
 }

 int* fun(int x,int* arr){
     static int i = 0;
     static int temp = x;
      if(x > 0 && i < temp){
          fun(x-1,arr);
          arr[i] = x;
          i++;
      }
      return arr;
 }
