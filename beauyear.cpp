////Ladder11--:> A Beautiful Year

#include<iostream>

using namespace std;

int main(){
   int test;
   cin>>test;

   int p = test%10;
   int x = test%100;
   int q = (x-p)/10;
   int y = test%1000;
   int r = (y-x)/100;
   int z = test%10000;
   int s = (z-y)/1000;
   
   p+=1;
       if(p==10){
           p=0;
           q +=1;
           if(q == 10){
               q =0;
               r +=1;
               if(r==10){
                   r=0;
                   s+=1;
               }
           }
       }
   while(s == r || s==q || s==p || r == s || r==q || r==p || q == r || q==s || q==p || p == r || p==q || p==s)
   {
       p+=1;
       if(p==10){
           p=0;
           q +=1;
           if(q == 10){
               q =0;
               r +=1;
               if(r==10){
                   r=0;
                   s+=1;
               }
           }
       }
   }
   
   cout<<s<<r<<q<<p<<endl;

   return 0;
}