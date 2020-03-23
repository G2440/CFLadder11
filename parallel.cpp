//Ladder11--:>Parallelepiped
#include <iostream>
#include<cmath>
using namespace std;
int main(){
     int x, y ,z;
     cin>>x>>y>>z;
     int a =0;
     int b = (x*z)/y;
     a = sqrt(b);
     x = a;
     z = z/a;
     y = y/z;
     int total  = 4*x + 4*y + 4*z;
     cout<<total<<endl;
     }

     
