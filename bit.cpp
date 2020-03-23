//Ladder11--:>Bit++
#include <iostream>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    int x =0;
    while(cases--){
        char str[4];
        cin>>str;
        if(str[1] == '+')
        x++;
        else
        x--;
    }
    cout<<x<<endl;
    return 0;
}
