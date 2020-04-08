//Ladder11--:>Hungry Sequence
#include<iostream>
using namespace std;
 
 
int isprime(int n); 

int main(){

    int x;
    cin>>x;
    int  i = 3;
    int p =0;
    
    if(x>1000){
    int m= 3*x;
    while(x>p && m <= 10000000){
        if(m%100!=0){
        cout<<m<<" ";
        p++;
        }
        m++; 
    }
    }
    else{
    while(x>p){
        if(isprime(i)){
            if(i <= 10000000){
            cout<<i<<" ";
            p++;
            }
            else 
            break;
        }
        i++;
    }
    }
     return 0;   
}


int isprime(int n)
{
 for (int l = 2; l <= n/2; l+=1) 
      if ( n% l == 0) 
           return 0;
    return 1;          
}