//Ladder11--:>Kitahara Haruki's Gift
#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[2] = {0};
    int p = x;
    int q =0;
    while(p--){
      cin>>q;
        if(q==100)
        arr[0]++;
        else if(q==200)
        arr[1]++;
    }
    float a = arr[0];
    float b = arr[1];
   
    if(a==0 || b==0){
      if(a==0 && b!=0){
          if((int)b % 2 ==0 )
          cout<<"YES"<<endl;
          else
          cout<<"NO"<<endl;
      }
      else if(a!=0 && b==0){
          if((int)a % 2 ==0 )
          cout<<"YES"<<endl;
          else
          cout<<"NO"<<endl;
      }
      else
      cout<<"NO"<<endl;
    }
    else{
    float m = 200*b + 100*a;
    if(((int)m%200)==0)    
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}
