//Ladder11--:>Even and Odds
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long int a , b;
    cin>>a>>b;
    long long int odd = a - floor(a/2);
    long long int even = a - odd;
    if(odd>=b)
    cout<<((2*b)-1)<<endl;
    else{
        long long int x = b-odd;
        cout<<(2*x)<<endl;
    }
    return 0;
}
