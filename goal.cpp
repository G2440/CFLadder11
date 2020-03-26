//Ladder11--:>Football
#include<iostream> 
#include<strings.h>
using namespace std;

int main(){
    
    int x;
    cin>>x;
    string p[x];
    for(int i = 0 ; i < x; i++)
    cin>>p[i];
    if(x==1)
    cout<<p[0]<<endl;
    else{
    int count1=0,count2=0;
    int var= 0;
    string a = p[0];
    for(int i = 0 ;i < x; i++){
        if(a == p[i]){
            count1++;
        }
        else{
            var = i;
            count2++;
        }
    }
    if(count1>count2)
    cout<<a<<endl;
    else{
        cout<<p[var]<<endl;
    }
    }

    return 0;
}