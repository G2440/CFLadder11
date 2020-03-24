//Ladder11--:>Jeff and Digits
#include<iostream>

using namespace std;

int main(){
    long long int x;
    cin>>x;
    long long int count0 = 0 , count5=0;
    while(x--){
        int test;
        cin>>test;
        if(test==0)
        count0++;
        else
        count5++;
    }
    long long num =0;
    long long int t5=0;
    long int t0=0;
    long long int p = count5 / 9;
    if(p>0 && count0!=0){
        t5 = 9*p;
        t0 = count0;
        while(t5--){
            cout<<5;
        } 
        while(t0--){
            cout<<0;
        }
    }
    else if(p==0 && count0 !=0)
    cout<<0;
    else{
        cout<<-1;
    }

    return 0;
}