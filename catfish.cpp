//Ladder11--:>Boy or Girl
#include <iostream>
using namespace std;
int main(){
    char test[101];
    cin>>test;
    int count=0;
    int i=0;
    for(i =0 ; test[i] !='\0' ; i++);
    for(int p =0 ; p<i ; p++){
        for(int j = p ; j<i-1 ;j++){
            if(test[p]>test[j+1]){
                char temp = test[p];
                test[p] = test[j+1];
                test[j+1] = temp;
            }
        }
    }
    for(int p =0 ; p<i ; p++){
        for(int j = p ; j<i-1 ;j++){
            if(test[p] == test[j+1]){
                count++;
                p++;
            }
        }
    }
    if((i-count) %2 == 0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;
    return 0;
}
