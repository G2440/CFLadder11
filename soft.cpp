//Ladder--:>Soft Drinking
#include <iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int t = k*l;
    int total = t/nl;
    int limes = c*d;
    int salt = p/np;
    int totalT = total/n;
    int limesT = limes/n;
    int saltT = salt/n;
    int temp = totalT;
    if(temp>limesT)
    temp = limesT;
    if(temp>saltT)
    temp = saltT;
    cout<<temp<<endl;
    return 0;
}
