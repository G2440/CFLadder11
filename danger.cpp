//Ladder11--:>Football 52
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s ;
    cin>>s;
    string p = "1111111";
    string q = "0000000";
    int pos1 = s.find(p);
    int pos2 = s.find(q);
    int count = s.length();
    if((pos1!= -1) || (pos2!=-1))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
