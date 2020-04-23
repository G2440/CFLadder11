#include<iostream>

using namespace std;

int main(){
    int n ; 
    cin>>n;
    int no25 =0,no50=0,no100=0;
    int flag =0;
    int p[n];
    for(int i =0 ; i < n;i++)
        cin>>p[i];
    for(int i =0 ; i < n ; i++){
        if(p[i]==25){
        no25++;
        }
        else if(p[i]==50){
        if(no25>0){
            no50++;
            no25--;
        }
        else{
            cout<<"NO"<<endl;
            flag =1;
            break;
        }    
        }
        else if(p[i]==100){
            if(no50>0 && no25>0){
                no50--;
                no25--;
                no100++;
            }
            else if(no50==0 && no25>=3){
                no25 -=3;
                no100++;
            }
            else{
                cout<<"NO"<<endl;
                flag =1;
                break;
            }
        }
    }    

    
    if(flag == 0)
    cout<<"YES"<<endl;

    return 0;
}