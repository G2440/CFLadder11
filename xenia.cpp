#include<iostream>
using namespace std;


int main(){
    long long int houses,chores;
    cin>>houses>>chores;
    long long int arr[chores];

   long long int temp=0 , count= 0; 
    
    for(int i=0;i<chores;i++){
    cin>>arr[i];

    }
    temp = arr[0];
    count = temp -1;
      for(int i=1;i<chores;i++){
         if(temp == arr[i]){
             temp = arr[i];
         continue;
         }
         else if(temp<arr[i]){
            long long int x = arr[i] - temp;
             count +=x;
             temp = arr[i];
         }
         else if(temp > arr[i]){
             long long int y = temp - arr[i];
            long long  int z = houses - y;
             count = count + z;
             temp = arr[i];
         }
    }
    cout<<count<<endl;
    return 0;
}