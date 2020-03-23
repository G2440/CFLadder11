//Ladder11-:>Drinks
#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    float arr[test];
    for(int i =0 ; i < test ;i++)
    cin>>arr[i];
    double ans =0;
    for(int i =0 ; i < test ; i++){
        double temp = 0;
        if(arr[i] !=0)
        temp = (arr[i]/100);
        else
        temp = 0;
        ans+=temp;
    }
    if(ans!=0){
    ans = ans/test;
    ans = ans*100;
    cout<<ans<<endl;
    }
    else
    cout<<0<<endl;
    return 0;
}
