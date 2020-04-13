//Ladder11--:>TL

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
    int n,m;
    cin>>n>>m;
    int correct[n],incorrect[m];
    for(int i =0; i < n ; i++)
    cin>>correct[i];
    for(int i =0; i < m; i++)
    cin>>incorrect[i];
    
    int imin = 101;
    int cmax = 0,cmin=101;
    for(int i =0 ; i< n;i++)
     if(correct[i] < cmin)
    cmin = correct[i];
    else if(correct[i] >cmax)
    cmax = correct[i];
    for(int i =0 ; i< m;i++)
    if(incorrect[i] < imin)
    imin = incorrect[i];
    
    if(imin <= cmax)
    cout<<-1<<endl;
    else
    {
        int temp = cmin*2;
        if(temp <= cmax){
            if(cmax == imin-1)
            cout<<cmax<<endl;
            else  
            cout<<temp<<endl;
        }
    }
    
    return 0;
}