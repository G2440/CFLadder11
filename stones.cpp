//Ladder11-:>Stones on the table

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char test[n];
    cin>>test;
    int count =0;
    for(int i = 0 ; test[i] !='\0';i++){
        if(test[i] == test[i+1]){
            count++;
        }
        
    }
    cout<<count<<endl;

    return 0;
}