////Ladder11--:> Borze

#include<iostream>

using namespace std;

int main(){
    
    char arr[200];
    cin>>arr;
    int length = sizeof(&arr)/sizeof(arr[0]);
    int p =0;
    for( p =0 ; arr[p] !=0 ; p++);

int i =0;
    while(i<p){
        if(arr[i] == '.'){
            cout<<0;
            i +=1;
        }
        else if(arr[i] == '-' && arr[i+1] == '.'){
            cout<<1;
            i+=2;
        }
        else if(arr[i] == '-' && arr[i+1] == '-'){
            cout<<2;
            i+=2;
        }
    }

    return 0;
}