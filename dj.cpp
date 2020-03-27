//Ladder11--:>Dubstep
#include <iostream>
#include <string>
using namespace std;
int main(){
    string x;
    cin>>x;
    string c = "WUB";
    string r = " ";
    int pos = x.find(c);
    while(pos != -1){
        x.replace(pos,c.size(),r);
        pos = x.find(c,pos + r.size());
    }
    cout<<x<<endl;
    return 0;
}
