//Ladder11--:>Dragons
#include<iostream> 
using namespace std;

int main(){
    
    int x,y;
    cin>>x>>y;
    int str[y] , bon[y];
    for(int i =0 ; i < y ; i++)
    cin>>str[i]>>bon[i];
    int flag =0 ;
    for(int i = 0 ; i < y; i++){
        if(x>str[i])
        x+= bon[i];
        else{
            flag = 1;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(flag== 0)
    cout<<"YES"<<endl;
 
    return 0; 
}