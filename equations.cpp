//Ladder11--:>System of Equations
#include <iostream>
using namespace std;
int main (){
    int x , y ;
    cin>>x>>y;
    int count =0 ;
    for(int i =0 ; i < 1001; i++){
        for(int j = 0; j <1001 ; j++){
        if((((i*i) + j) == x) && ((i + (j*j))==y))
        count++;
    }
    }
    cout<<count<<endl;
    return 0;
}
