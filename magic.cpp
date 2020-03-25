//Ladder11--:>Magic Numbers
#include <iostream>
using namespace std;
int main(){
    char str[10^16];
    cin>>str;
    int flag = 0 ;
    long long int x;
    for(x= 0 ; str[x] !='\0' ; x++);
    for(int i =0 ;i<x ;){
        if((str[i] != '1'&& str[i] != '4')){
            flag =1;
            cout<<"NO"<<endl;
            break;
        }
       else if(str[i] == '1'&& str[i+1] == '4'&& str[i+2] == '4'){
           if((i+3) <x)
           i = i+3;
           else
           break;
        }
        else if(str[i] == '1'&& str[i+1] == '4'){
           if((i+2) <x)
           i = i+2;
           else
           break;
        }
         else if(str[i] == '1'){
           if((i+1) <x)
           i = i+1;
           else
           break;
        }
        else{
             flag = 1;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(flag == 0)
    cout<<"YES"<<endl;
    return 0;
}
