//Ladder11-:>Word Capitalisation
#include <iostream>
using namespace std;
int main(){
    char test[1000];
    cin>>test;
    char n = test[0];
    if(n >='a' && n <= 'z')
    test[0] = n - 32;
    cout<<test;
    return 0;
}
