//Ladder11--:>Amusing Joke
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str1[101];
    char str2[101];
    char str3[101];
    cin>>str1;
    cin>>str2;
    cin>>str3;
    strcat(str1,str2);
    int c1 = strlen(str1);
    int c2 = strlen(str3);
if(c1==c2){
    for(int i =0; str1[i] !='\0';i++){
        for(int j = 0 ; str3[j] != '\0' ;j++){
            if(str1[i] == str3[j]){
                str1[i] = '0';
                str3[j] = '0';
                break;
            }
        }
    }
    int flag =0;
    for(int i=0;i<c2;i++){
        if(str3[i]!='0'){
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
else
cout<<"NO"<<endl;
    return 0;
}
