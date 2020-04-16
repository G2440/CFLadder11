#include<iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int x = 2*n;
    int arr[x];
    for(int i =0 ; i < x; i++)
    cin>>arr[i];
    int flag1 =0, flag2=0;
    if(arr[0] > arr[x/2])
    flag1 =1;
    else if(arr[0] < arr[x/2])
    flag2 = 1;
    else
    cout<<"NO"<<endl;
    int flag3=0;
    if(flag1==1){
      for(int i =1 , j = (x/2 + 1) ; i<x/2 && j < x ; i++,j++)
          if(arr[i] <= arr[j]){
              flag3 =1;
              break;
          }
          if(flag3==1)
          cout<<"NO"<<endl;
          else  
          cout<<"YES"<<endl;
        
    }
    if(flag2==1){
        for(int i =1 , j = (x/2 + 1) ; i<x/2 && j < x ; i++,j++)
          if(arr[i] >= arr[j]){
              flag3 =1;
              break;
          }
          if(flag3==1)
          cout<<"NO"<<endl;
          else  
          cout<<"YES"<<endl;
    }

    return 0;
}