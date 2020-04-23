#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int x;
    cin>>x;
    int odd=0; 
    int up[x],lo[x];
    int sum_Up=0,sum_lo=0;
    for(int i =0 ; i< x; i++){
    cin>>up[i]>>lo[i];
    sum_Up+=up[i];
    sum_lo+=lo[i];
    if(up[i]%2!=0 && lo[i]%2==0)
    odd++;
    else if(up[i] %2 ==0 && lo[i] %2!=0) 
    odd++;
    }
    if(sum_lo%2==0 && sum_Up%2==0){
        cout<<0<<endl;
    }
    else if(sum_Up%2!=0 && sum_lo%2!=0){
        if(odd>0)
        cout<<1<<endl;
        else   
        cout<<-1<<endl;
    }
    else
    cout<<-1<<endl;


    return 0;
}