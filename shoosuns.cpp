//Ladder11--:>Shooshuns and Sequence 
#include<iostream>
using namespace std; 
int main(){

    int x , y;
    cin>>x>>y;
    int arr[x];
    int arr1[100000] = {0};
    for(int i =0 ; i < x;i++){
            cin>>arr[i];
            int temp = arr[i];
            arr1[temp]++;
    } 
    long int max =0 ;
    for(int i =0 ; i < 100000; i++){
        if(max < arr1[i])
        max = arr1[i];
    }
      
    if(max== x)
    cout<<0<<endl;
    else  {    
    long int ans =0 ;
    long int p = x;
    long int l =0;
    int flag =1 ;
    while(p--){
          flag = 1;
         long int g = arr[y-1];
         for(int i =0 ; i<x-1 ; i++)
             arr[i] = arr[i+1];
         arr[x-1] = g;
         ans++;
        for(int i =0 ; i < x-1; i++)
            if(arr[i] != arr[i+1]){
               flag = 0;
               break;
        }
        
        

        if(flag == 1)
        break; 
    }
     
     if(ans==x && flag==0)
     cout<<-1<<endl;
     else   
     cout<<ans<<endl;
    }
    return 0;
}