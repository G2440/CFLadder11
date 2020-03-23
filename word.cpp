//Ladder11-:>Word

#include <iostream>
using namespace std;
int main(){
    char test[100];
    cin>>test;
    int countlower =0;
    int countupper =0;
    for(int i =0 ; test[i] != '\0' ; i++){
        if(test[i] >='A' && test[i] <= 'Z')
        countupper++;
        else{
        countlower++;
        }
    }
     if(countlower == countupper){
    for(int i =0 ;test[i] != '\0' ; i++){
        if(test[i] >='A' && test[i] <= 'Z'){
            test[i] = test[i] + 32;
        }
    }
     }
     else if(countlower > countupper){
    for(int i =0 ;test[i]!= '\0' ; i++){
        if(test[i] >='A' && test[i] <= 'Z'){
            test[i] = test[i] + 32;
        }
    }
     }
     else{
    for(int i =0 ; test[i] != '\0' ; i++){
        if(test[i] >='a' && test[i] <= 'z'){
            test[i] = test[i] - 32;
        }
    }
     }
    cout<<test;
    return 0;
}
