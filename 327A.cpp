#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    int count1=0;
    int count0=0;
    int arr[x];
    for(int i =0 ; i< x; i++){
    cin>>arr[i];
    if(arr[i]==0)
    count0++;
    else   
    count1++;
    }
    if(count0 ==0 && count1 == x)
    cout<<x-1<<endl;
    else if(count0 == x && count1 ==0)
    cout<<x<<endl;
    else{
    int arr1[50] = {0};
    int arr2[50] = {0};
    int i =0,k=0;
    int j =0, count =0;
    while(x>i){
        count= 0;
        j = i;
        if(arr[i] ==1)
        i++;
        else if(arr[i]==0){
            while(arr[j] != 1 && j<x){
                count++;
                j++;
            }
            arr1[k] = count;
            k++;
            i = j+1;
        }
    }
    
    int max = arr1[0];
    for(int m =0 ; m< 50 ;m++)
    if(max<arr1[m])
    max = arr1[m];

    int ans1 = count1 + max;
    int g =0;
    for(int l =0 ; l< 50 ;l++){
        if(arr1[l] !=0){
        int temp = arr1[l] + arr1[l+1] - 1;
        int temp1 = temp + count1;
        arr2[g] = temp1;
        g++;
        } 
    }
    int ans2=0;
    for(int a =0 ; a < 50 ;a++)
    if(ans2<arr2[a])
    ans2 = arr2[a];
    
    if(ans1>ans2)
    cout<<ans1<<endl;
    else
    cout<<ans2<<endl;

    }
    return 0;
}