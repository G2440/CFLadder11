//Ladder11--:>Fence

#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int arr[x];
    for(int i =0 ; i < x; i++)
    cin>>arr[i];
    int min = 1000000;
    int flag =0;
    int sum =0 ;
    int var =0;
    for(int i = 0; i < x; i++){
        sum =0;
        if(i + y - 1 <x){
        for(int j = 0 ; j < y;j++){
            sum +=arr[i+j];   
        }
        if(sum<min){
        min = sum;
        var  = i+1;
        }
        }
        else
        break;
    }
    cout<<var<<endl;


    return 0;
}