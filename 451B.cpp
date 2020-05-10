//Ladder11--:>Sort the Array
#include<iostream>
using namespace std;

int is_sorted(int *a,int x);

int main(){ 
 
    
    int x;
    cin>>x;
    int arr[x+1];
    for(int i =1 ; i<=x ;i++)
    cin>>arr[i];
    int l =0; 
    int r =0;
    int arr1[x+1];
    for(int i =1; i<=x;i++)
    arr1[i] = arr[i];


    for(int i =1 ; i <=x;i++){
        if(arr[i] != i){
        l = i;
        break;
        }
    }
    for(int i =1 ; i<=x;i++)
    if(arr[i] !=i){  
    r= i;
}   

    if(r==0 && l == 0){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }else{
        int a = l;
        int b = r;
        for(int i =l;i<=r;i++){
            arr[i] = arr1[b];
            b--;
        }
            if(is_sorted(arr,x)==0)
    cout<<"no"<<endl;
    else{
        cout<<"yes"<<endl;
        cout<<l<<" "<<r<<endl;
    }

    }
    

    
    return 0;
}

int is_sorted(int *a,int x){
    for(int i =1 ; i<=x;i++)
    if(a[i] !=i)
    return 0;
    return 1;
}