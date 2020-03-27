//Ladder11--:>Business Trip
#include <iostream>
using namespace std;
int main(){
    int x;
    int arr[12];
    cin>>x;
    for(int i =0 ; i < 12; i++)
    cin>>arr[i];
    int sum =0 , count=0 , var =0,flag=0;
    int max =0 ;
    while(sum<x){
        if(count == 13){
            cout<<-1<<endl;
            flag =1;
            break;
        }
        for(int i =0 ; i < 12 ; i++){
            if(max< arr[i]){
               max = arr[i];
               var = i;
            }
        }
        sum = sum +max;
        count++;
        max = 0;
        arr[var] = -1;
    }
   if(flag == 0)
   cout<<count<<endl;
    return 0;
}
