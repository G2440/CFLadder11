#include <bits/stdc++.h> 
using namespace std;

int main(){
    int x ;
    cin>>x;
    int count= 0;
    for(int i = 1; i <=x;i++){
        for(int j =1; j <=x;j++){
                 if(i<=j){
                 int  p = i*i + j*j;
                 float z = sqrt(p);
                 if(int(z) ==z){                     
                     int b = int(z); 
                     if(1<=i && i<=j && j<=b && b<=x)
                     count++;
        }
        }
                 
        }
    }
     

    cout<<count<<endl;
    return 0;
}
