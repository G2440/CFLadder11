#include<iostream>
#include<cmath>
using namespace std;

int printDivisors(int n,int c) 
{ 
    for (int i=1;i<=n;i++) 
        if (n%i==0) 
            c++;
return c;
}


int main(){
    int x, y ,z;
    cin>>x>>y>>z;
    long int sum =1;
    int flag1 =1,flag2=1,flag3=0;
    int a =1 ,b=1,c=1;
    int p = x + y + z;
    int count =0;
    for(int i = 0; i <p;i++){
        if(flag3 == 0){
            count =0 ;
            c++;
            int prod = a * b *c;
            count = printDivisors(prod,count);
            sum+=count;
            if(c==z){
            flag3 = 1;
            flag2 = 0;
            c = 1;
            } 
        }
        else if(flag2 == 0){
            count =0;
            b++;
            int prod = a * b *c;
            count = printDivisors(prod,count);
            sum+=count;
            if(b==y){
            flag2 = 1;
            flag1 = 0;
            b = 1;
            } 
            
        }
        else if(flag1 ==0){
            count =0;
            a++;
            int prod = a * b *c;
            count = printDivisors(prod,count);
            sum+=count;
            if(a==x){
            flag1 = 1;
            }
        }
    }
  
    long int o = sum % 1073741824;
    cout<<o<<endl;
    return 0;
}

