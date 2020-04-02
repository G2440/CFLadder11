//Ladder11--:>Little Girl and Game
#include<iostream> 
#include<string> 
using namespace std; 

bool check(string x);

int main(){

    string s;
    cin>>s;
    
    

    return 0;
}

bool check(string x){
    int a = x.length() -1;
     for(int i = 0 ; x[i] !='\0';i++){
         if(x[i] == x[a-i])
         continue;
         else  
         return false;
     }
return true;
}