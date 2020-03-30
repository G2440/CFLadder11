//Ladder--:>Chat Room
#include<iostream> 
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    string res ; 
  
    for(int i =0 ; i < s.length() ;i++){
        if(s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o' ){
            if(res[0] == '\0' && s[i] == 'h')
            res += s[i];
            else if(res[1] == '\0'&& s[i] == 'e' && res[0] != '\0' )
            res += s[i];
            else if(res[2] == '\0' && s[i] == 'l' && res[0] != '\0' && res[1] != '\0')
            res += s[i];
            else  if(res[3] == '\0' && s[i] == 'l' && res[0] != '\0' && res[1] != '\0' && res[2] != '\0')
            res += s[i];
            else if(res[4] == '\0' && s[i] == 'o' && res[0] != '\0' && res[1] != '\0' && res[2] != '\0' && res[3] != '\0')
            res += s[i];
        }
        if(res.length() == 5){
            break;
        }
    }
  
    if(res=="hello")
    cout<<"YES"<<endl;
    else   
    cout<<"NO"<<endl;

    

    return 0;
}