//Ladder11--:>String Task
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i = 0; s[i] != '\0' ; i++)
        if(s[i]>= 'A' && s[i] <= 'Z')
        s[i] = s[i] + 32;
    string res;
    for(int i = 0 ; s[i] != '\0' ; i++){
        if(s[i]=='a' || s[i]=='o' ||s[i]=='y' ||s[i]=='e' ||s[i]=='u' ||s[i]=='i' ||s[i]=='A' ||s[i]=='O' ||s[i]=='Y' ||s[i]=='E' || s[i]=='U' ||s[i]=='I')
        continue;
        else
        res += s[i];
    }
    for(int i =0 ; res[i] !='\0';i++)
    cout<<"."<<res[i];
    return 0;
}
