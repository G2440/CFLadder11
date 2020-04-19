//Ladder11--:>Shooshuns and Sequence 
#include<iostream>
using namespace std; 
int main(){
    int x,y;
    cin>>x>>y;
    int arr[x];
    for(int i =0 ; i < x; i++)
    cin>>arr[i];
    int flag1 =0;
    int check1 = arr[0];
    for(int i =0; i < x; i++)
    if(arr[i] != check1){
        flag1 =1;
        break;
    }
    if(flag1 ==0)
    cout<<0<<endl;
    else{
        if(x==y)
        cout<<y-1<<endl;
        else{
            int flag2 =0;
            int check2 = arr[y-1];
            for(int i = y ; i < x; i++)
            if(arr[i] != check2){
                flag2= 1;
                break;
            }
            if(flag2==1)
            cout<<-1<<endl;
            else{
                int cnt=0;
                int flag =0;
                int flag3=0;
                for(int i = y-1; i>=0;i--){
                    if(flag3==0){
                        if(arr[i] != check2){
                            flag3 =1;
                            flag = 1;
                        }
                    }
                    if(flag==1)
                    cnt++;
                }
                cout<<cnt<<endl;
            }
        }
    }
    return 0;
}