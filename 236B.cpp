#include<iostream>
#include<cmath>
using namespace std;



int main(){
    int x, y ,z;
    cin>>x>>y>>z;
    long int sum =0;
    for(int i = 1 ; i <=x;i++ ){
        for(int j = 1; j <=y;j++ ){
            for(int k = 1; k<=z;k++){
                 int u = i * j * k;
                 int count =0;
                 for(int h =1;h<=sqrt(u);h++)
                     if(u%h==0){
                         if(u/h==h)
                         count++;
                         else
                         count+=2;
                     }  
                       count++;
                   sum+=count;    
            }
        }
    }
  
    long int o = sum % 1073741824;
    cout<<o<<endl;
    return 0;
}

