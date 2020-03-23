//Ladder--:>Supercentral Point
#include <iostream>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    int x[cases] , y[cases];
    for(int i =0; i<cases; i++)
    cin>>x[i]>>y[i];
    int a = 0;
    int lef=0,rig=0,top=0,bot=0,count=0;
    while(a<cases){
        for(int i = 0 ; i < cases ; i++){
            if(x[a]<x[i] && y[a]==y[i])
            rig = 1;
            else if(x[a]>x[i] && y[a]==y[i])
            lef = 1;
            else if(x[a]==x[i] && y[a]>y[i])
            bot = 1;
            else if(x[a]==x[i] && y[a]<y[i])
            top = 1;
        }
        if(top == 1 && rig == 1 && lef == 1 && bot == 1 )
          count++;
          lef=0,rig=0,top=0,bot=0;
          a++;
    }
     cout<<count<<endl;
    return 0;
}
