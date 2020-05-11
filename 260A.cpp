//Ladder11--:>Adding Digits

#include<iostream>
#include<string>
#define ulli unsigned long long int
using namespace std;
int main(){

    ulli a,b,n;
    cin>>a>>b>>n;

    int flag =0;
    ulli del = a;
     for(ulli i = 0; i<=9;i++)
        if(((del*10) + i )%b ==0){
            del = (del*10) + i;
            flag = 1;
            break;
        }
    n--;    
    if(flag == 0)
    cout<<-1<<endl;
    else{   
    string p;
    p  = to_string(del);
    
    while(n--)
        p += '0';
    
    cout<<p<<endl;
    }

    return 0;
}