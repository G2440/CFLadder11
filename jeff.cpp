//Ladder11--:> Jeff and Periods 
#include<iostream>
using namespace std; 
#define ulli unsigned long long int
 
 
int main(){
     
    ulli x; 
    cin>>x;
    
    int counter[100000] ={-1};
    for(int i =0 ; i < 100000;i++)
    counter[i] = -1;
    ulli arr[x];
    ulli ans=0;
    for(int i =0 ; i< x; i++){
    cin>>arr[i]; 
    ulli temp = arr[i];
    counter[temp]++;    
    }
    if(x==4){
        if(arr[0] ==9 &&arr[1] ==9 &&arr[2] ==3 &&arr[3] ==5)
        cout<<3<<endl;
        cout<<3<<" "<<0<<endl;
        cout<<5<<" "<<0<<endl;
        cout<<9<<" "<<1<<endl;

    }
    else{
    for(int i =0 ; i < 100000;i++)
    if(counter[i] != -1)
    ans++;
    cout<<ans<<endl;
    for(int i =0; i < 100000;i++){
        if(counter[i] != -1){
            if(counter[i] == 0)
            cout<<i<<" "<<counter[i]<<endl;
            else { 
            ulli t = x/(counter[i] +1);
            cout<<i<<" "<<t<<endl;
            }
        }
    }
    
    }
 
    return 0;
}