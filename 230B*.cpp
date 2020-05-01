#include <bits/stdc++.h> 

#include<cmath>
using namespace std;
#define ulli unsigned long long int

void SieveOfEratosthenes(int n);
int arr[1000001] = {0};

int main(){

    ulli x;
    cin>>x;
    SieveOfEratosthenes(1000000);
    while(x--){
        ulli y;
        cin>>y;
        int flag=0;
        for(int i =2;i<1000001 ;i++)
        if(y == arr[i]){
            flag= 1;
            break;
        }
        if(flag == 1)
        cout<<"YES"<<endl;
        else  
        cout<<"NO"<<endl;
        }
     
    
  
    
    return 0; 
}


void SieveOfEratosthenes(int n) 
{ 
    
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
       
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          arr[p] = p*p; 
} 


