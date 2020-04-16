//Ladder11--:>Unlucky Ticket
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    string t = arr.substr(n);
    string m = arr.substr(0 , n);
    sort (t.begin(),t.end());
    sort (m.begin(),m.end());
    int flag1 =0, flag2=0;
    if(m[0] > t[0])
    flag1 =1;
    else if(m[0] < t[0])
    flag2 = 1;
    else
    cout<<"NO"<<endl;
    
    int flag3=0;
    if(flag1==1){
      for(int i = 1 ; i<n;i++)
          if(m[i] <= t[i]){
              flag3 =1;
              break;
          }
          if(flag3==1)
          cout<<"NO"<<endl;
          else  
          cout<<"YES"<<endl;
    }
    if(flag2==1){
        for(int i = 1 ; i < n;i++)
          if(m[i] >= t[i]){
              flag3 =1;
              break;
          }
          if(flag3==1)
          cout<<"NO"<<endl;
          else  
          cout<<"YES"<<endl;
    }
    return 0;
}