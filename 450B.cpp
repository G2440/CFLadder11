//Ladder11--:>Jzzhu and Sequences
#include<iostream>
#define lli long long int
using namespace std;

lli mod(lli a, lli b);
lli perm = 1000000007;
int main(){
    
    lli f1, f2;
    cin>>f1>>f2;
    lli n;
    cin>>n;
    if(n<=2){
        if(n==1){
        lli t1 = mod(f1,perm);
        cout<<t1<<endl;
        
        }else{
        lli t2 = mod(f2,perm);
        cout<<t2<<endl;
    }
    }
    else{
        
        lli temp0 = f1;
        lli temp1 = f2;
        lli sum =0;
        for(lli i = 3;i<=n;i++){
            sum += temp1 - temp0;
            temp0 = temp1;
            temp1 = sum;
        }
        lli t3 = mod(sum,perm);
        cout<<t3<<endl;
    }

    return 0;
}

lli mod(lli a, lli b){
    lli r = a % b;
    return r < 0 ? r + b : r;
}