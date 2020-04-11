//Ladder11--:>TL

#include<iostream>
using namespace std;
int main(){
    
    int n,m;
    int correct[n],incorrect[m];
    for(int i =0; i < n ; i++)
    cin>>correct[i];
    for(int i =0; i < n ; i++)
    cin>>incorrect[i];
    int cmin=101,cmax=0;

    for(int i =0 ; i < n ;i++){
        if(correct[i] < cmin)
        cmin = correct[i];
        else if(correct[i] >cmax)
        cmax = correct[i];
    }
    if(cmax>=(2*cmin)){
       int flag = 0 ;
       for(int i =0 ; i < m ; i++)
       if(incorrect[i]<= cmax){
           flag = 1;
           break;
       }
       if(flag == 1)
       cout<<-1<<endl;
       else    
       cout<<cmax<<endl; 
    }
    else{
        cout<<-1<<endl;
    }


    return 0;
}