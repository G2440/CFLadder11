#include<iostream>

using namespace std;

int main(){
    
    int x;
    int odd_up =0,odd_lo=0; 
    int up[x],lo[x];
    int sum_Up=0,sum_lo=0;
    for(int i =0 ; i< x; i++){
    cin>>up[i]>>lo[i];
    sum_Up+=up[i];
    sum_lo+=lo[i];
    if(up[i]%2!=0)
    odd_up++;
    if(lo[i]%2!=0)
    odd_lo++;
    }
    if(sum_lo%2==0 && sum_Up%2==0){
        cout<<0<<endl;
    }
    else if((odd_lo + odd_up)%2==0){
        if(odd_lo<odd_up)
        cout<<odd_lo<<endl;
        else   
        cout<<odd_up<<endl;
    }
    else
    cout<<-1<<endl;


    return 0;
}