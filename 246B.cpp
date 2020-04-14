//Ladder11--:> Increase and Decrease

#include<iostream> 
using namespace std;

int main(){
    
    int x;
    cin>>x;
    int arr[x];
    
    int sum =0;

    for(int i =0 ; i < x; i++){
    cin>>arr[i];
    sum += arr[i];
    }

    if(sum%x==0)
    cout<<x<<endl;
    else 
    cout<<x-1<<endl;
    

    return 0;
}