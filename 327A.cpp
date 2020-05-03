#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    int arr[x];
    for(int i =0 ; i< x; i++)
    cin>>arr[i];
    int i =0 ,j =0;
    int flag= 0,cnt1=0;
    int count =0, countnew=0;
    for(i =0;i<x ;i++){
        countnew=0;
        if(arr[i] ==0){
            countnew++;
            for(j = i +1;j<x;j++){
                if(arr[j] == 0)
                countnew++;
                else
                cnt1++;
            }
            countnew = countnew-cnt1;
            if(count<countnew)
            count = countnew;
            i = j;
        }
     
    }
    cout<<count<<endl;

   
    return 0;
}