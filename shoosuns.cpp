//Ladder11--:>Shooshuns and Sequence 
#include<iostream>
using namespace std; 
int main(){

    int x , y;
    cin>>x>>y;
    int arr[x];
    int arr1[100000]= {0};
    for (int i =0 ;i < x; i++){
    cin>>arr[i];
    arr1[arr[i]]++;
    }
    int p = arr[y-1];
    int q = arr[0];
    int flag1 =0;
    for(int i =0; i < x;i++)
    if(arr[i] != q)
    flag1 = 1;
    if(flag1 ==0)
    cout<<0<<endl;
    else if(x==y)
    cout<<y-1<<endl;
    else if(flag1 == 1){
    int flag =0; 
    for(int i = y ; i < x;i++)
    if(arr[i] != p)
    flag = 1;
    
    if(flag == 1)
    cout<<-1<<endl;
    else{
        int count =0;
        for(int i =0 ;i<100000;i++){
            if(i!=p && arr1[i] !=0)
            count+=arr1[i];
        }
    cout<<count<<endl;

    }  
    }

    return 0;
}