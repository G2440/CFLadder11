//Ladder11--:>Polo the Penguin and Matrix

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int x , y , z;
    cin>>x>>y>>z;
    int prod = x*y;
    int arr[prod];
    for(int i =0 ;i<prod;i++)
    cin>>arr[i];
    sort(arr,arr+prod);
    int d=0,count=0;
    d = arr[(prod-1)/2];
    int check = arr[0]%z;
    int flag1 =0;
    if(z==1){
        flag1 = 1;
    }
    if(flag1 ==0){
    int flag =0;
    for(int i =1 ;i<prod;i++){
        if(arr[i]%z!=check){
            flag =1 ;
            break;
        }
    }
    if(flag == 1)
    cout<<-1<<endl;
    else{
        for(int i =0 ; i < prod ;i++){
            int temp = abs(arr[i] - d);
            count+= temp/z;
        }
        cout<<count<<endl;
    }
    }
    else{  
         for(int i =0 ; i < prod ;i++){
            int temp = abs(arr[i] - d);
            count+= temp/z;
        }
        cout<<count<<endl;
    }

    return 0;
}