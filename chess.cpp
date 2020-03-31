//Ladder11--:>DZY Loves Chessboard
#include <iostream>
#include <string>
using namespace std ;
int main(){
    int x, y ;
    cin>>x>>y;
    string s[y];
    string res[y];
    for(int i =0 ; i < y; i++)
    cin>>s[i];
    for(int i =0; i < y; i++){
        for(int j =0 ; s[i][j] != '\0' ; j++){
                 if((i+1)%2!=0){
                 if(s[i][j] == '.'){
                 if(j%2==0)
                 res[i] += 'B';
                 else
                 res[i] += 'W';
                 }
                 else if(s[i][j] == '-')
                 res[i] += '-';
             }
             else if((i+1)%2==0){
                 if(s[i][j] == '.'){
                 if(j%2!=0)
                 res[i] += 'B';
                 else
                 res[i] += 'W';
                 }
                 else if(s[i][j] == '-')
                 res[i] += '-';
             }
             }
        }
    for(int i = 0 ; i<y ; i++){
    cout<<res[i]<<endl;
    }
    return 0;
}
