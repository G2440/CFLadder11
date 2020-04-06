//Ladder11--:>Hungry Sequence
#include<iostream>
using namespace std;
 
 
int prime(int n); 

int main(){
    
    int x;
    cin>>x;
    long long int  i = 2;
    int p =0;
    while(x>p && i < 10000000){
        if(prime(i)){
            cout<<i<<" ";
            p++;
        }
        i++;
    }
    
     return 0;   
}

int prime(int n)
{
 for (int l = 2; l <= n/2; l+=1) 
      if ( n% l == 0) 
           return 0;
    return 1;          
}