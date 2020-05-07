//Ladder11--:>Jzzhu and Sequences
#include<iostream>
#define lli long long int
using namespace std;

lli mod(lli a, lli b);



int main(){
    lli perm = 1000000007;
    lli f1, f2;
    cin>>f1>>f2;
    lli n;
    cin>>n;
    lli x = 6;
    lli f3 = f2-f1;
    
    lli f4 = f3 - f2;
    
    lli f5 = f4 - f3;
    
    lli f6 = f5 - f4;
    
    n = n-1; 
 
    if((n%x) ==0)
    cout<<mod(f1,perm)<<endl;
    else if((n%x) == 1)
    cout<<mod(f2,perm)<<endl;
    else if((n%x) == 2)
    cout<<mod(f3,perm)<<endl;
    else if((n%x) == 3)
    cout<<mod(f4,perm)<<endl;
    else if((n%x) == 4)
    cout<<mod(f5,perm)<<endl;
    else if((n%x) == 5)
    cout<<mod(f6,perm)<<endl; 
    



    return 0;
}

lli mod(lli a, lli b){
    lli r = a % b;
    return r < 0 ? r + b : r;
}