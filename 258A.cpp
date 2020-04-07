//Ladder11--:>Little Elephants and Bits

#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    string r;
    int arr[2];
    int flag =0;
    for(int i =0 ; s[i] != '\0';i++)
        if(s[i] == '0'){
        s[i] = '8';
        flag = 1;
        break;
}   
    if(flag == 0){
        for(int i = 0; i < s.length()-1 ; i++)
        cout<<s[i];
    }
   
    else{ 
    for(int i =0 ; s[i] !='\0';i++){
        if(s[i] != '8'){
          r +=s[i];
        }
    }
    cout<<r<<endl;
    }
    return 0;
}