//Ladder11--:>DZY Loves Chessboard
#include <iostream>
using namespace std ;
int main(){
    int x, y ;
    cin>>x>>y;
    char s[x][y];
    for(int i =0 ; i < x; i++)
    for(int j = 0 ; j < y ; j++ )
    cin>>s[i][j];
    for(int i =0; i < x; i++){
        for(int j =0 ; j<y ; j++){
                 if((i+1)%2!=0){
                 if(s[i][j] == '.'){
                 if(j%2==0)
                 s[i][j] = 'B';
                 else
                 s[i][j] = 'W';
                 }
                 else if(s[i][j] == '-')
                 s[i][j] = '-';
             }
             else if((i+1)%2==0){
                 if(s[i][j] == '.'){
                 if(j%2!=0)
                 s[i][j] = 'B';
                 else
                 s[i][j] = 'W';
                 }
                 else if(s[i][j] == '-')
                 s[i][j] = '-';
             }
             }
        }
    for(int i = 0 ; i<x ; i++){
        for(int j = 0 ; j < y;j++)
    cout<<s[i][j];
    cout<<endl;
    }
    return 0;
}
