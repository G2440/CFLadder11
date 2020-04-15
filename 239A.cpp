#include<iostream>
using namespace std;

int main(){
    
    int y, k ,n ;
    cin>>y>>k>>n;

    if(n-y==0)
    cout<<-1<<endl;
    else{
        int  flag =0 ;
        int t = n;
        while(t>y){
            if(t%k==0){
                flag =1;
                break;
            }
            t--;
        }
        if(flag == 0)
        cout<<-1<<endl;
        else{
            int p = n-y;
            for(int i = 1; i<=p;i++){
                if((y+i) % k==0)
                cout<<(y+i)<<" ";
            }
        }
    }


    return 0;

}