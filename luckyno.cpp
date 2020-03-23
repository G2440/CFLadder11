//Ladder11-:>Nearly Lucky Number
#include <iostream>
using namespace std;
void counter(long long int p,int *x,int *y,int *z);
int main(){
   long long int x;
    cin>>x;
    int a=0,b=0,c=0;
   int *counter4 = &a;
   int *counter7 = &b;
   int *counter0 = &c;
   counter(x,counter4,counter7,counter0);
   if(*counter4 + *counter7 == 4 || *counter4 + *counter7 == 7)
   cout<<"YES"<<endl;
   else
   {
       cout<<"NO"<<endl;
   }
    return 0;
}
void counter(long long int p,int *x,int *y,int *z){
    if(p>0){
    int temp =0;
    temp = p%10;
    if(temp==4)
    (*x)++;
    else if(temp == 7)
    (*y)++;
    else
    (*z)++;
    p = p/10;
    counter(p,x,y,z);
    }
}
