//Ladder11--:>Kitahara Haruki's Gift

#include<iostream>
using namespace std;

int main(){
    
    int x;
    cin>>x;
    int arr[2] = {0};
    int p = x;
    int q =0;
    while(p--){
      cin>>q;
        if(q==100)
        arr[0]++;
        else if(q==200)
        arr[1]++;
    }
    float a = arr[0];
    float b = arr[1];
    if(b==(a/2))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;  


    return 0;
}