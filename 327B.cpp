//Ladder11--:>Hungry Sequence
#include<iostream>
using namespace std;
 
 
int prime(int n); 

int main(){
    
    int x;
    cin>>x;
    int arr[100000] = {0} ;
    long long int  i = 2;
    int p =0;
    while(x>p && i < 10000000){
        if(prime(i)){
            arr[i]++;
            p++;
        }
        i++;
    }
    
    for(int o =0  ; o < 100000 ;o++){
        if(arr[o] !=0)
        cout<<o<<" ";
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