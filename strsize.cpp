//Ladder11--:>Petya and Strings
#include <iostream>
#include <strings.h>
#include <cstring>
using namespace std;
int main(){
    string x1;
    string x2;
    cin>>x1;
    cin>>x2;
    for (int i = 0; x1[i] !='\0' ; i++)
    {
        x1[i] = tolower(x1[i]);
        x2[i] = tolower(x2[i]);
    }
    int res = x1.compare(x2);
    if(res == 0)
    cout<<0<<endl;
    else if(res>0)
    cout<<1<<endl;
    else
    cout<<-1<<endl;
    return 0;
}
