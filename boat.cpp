//Ladder11--:>Sail
#include <iostream>
#include <string>
using namespace std;
int main(){
    int cases, x1,y1,x2,y2;
    cin>>cases>>x1>>y1>>x2>>y2;
    string s;
    cin>>s;
    int count=0;
    for(int i = 0; i < cases ; i++){
        if(s[i] == 'E'){
             if(x1 + 1<=x2)
               x1 +=1;
              count++;
              if(x1==x2 && y1==y2)
              break;
     }
     else if(s[i] == 'S'){
         if(y1-1>=y2)
         y1-=1;
         count++;
         if(x1==x2 && y1==y2)
            break;
     }
     else if(s[i] == 'W'){
         if(x1-1>=x2)
         x1-=1;
         count++;
         if(x1==x2 && y1==y2)
            break;
     }
     else if(s[i] == 'N'){
         if(y1+1<=y2)
         y1+=1; 
         count++;
         if(x1==x2 && y1==y2)
            break;
     }
      }
      if(x1==x2 && y1==y2)
            cout<<count<<endl;
      else
      cout<<-1<<endl;
    return 0;
}
