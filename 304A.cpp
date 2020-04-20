#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int x ;
    cin>>x;
    int count= 0;
    for(int i = 1; i <=sqrt(x);i++){
        for(int j = 2; j <= sqrt(x);j++){
             if(i <= j){
                 int temp = i*i + j*j;
                 cout<<i<<" "<<j<<" "<<" = "<<temp<<endl;
                 if(temp <= x)
                 count++;
             }
        }
    }

    cout<<count<<endl;
    return 0;
}