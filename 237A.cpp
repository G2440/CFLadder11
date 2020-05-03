//Ladder11--:>Free Cash

#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int arr1[x];
    int arr2[x];
    for(int i =0 ; i < x; i++)
    cin>>arr1[i]>>arr2[i];

    int cnt=0,max =0;
    int a=0,b=0;
    for(int i =0 ; i< x ;i++){
        if(arr1[i] == a && arr2[i] ==b)
        cnt++;
        else{
            a = arr1[i];
            b = arr2[i];
            cnt = 0;
        }
        if(cnt>max)
        max = cnt;
    }
    if(max == 0)
    cout<<1<<endl; 
    else  
    cout<<1+max<<endl;  
    return 0;
}