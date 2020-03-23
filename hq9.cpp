//Ladder--:>HQ9+
#include<iostream>
using namespace std;

int main(){

    char x[101];
    cin>>x;
    int flag =0 ;
    for(int i =0 ; x[i] != '\0' ; i++){
        if(x[i] == 'H' || x[i] == 'Q' || x[i] == '9'){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    return 0;
}