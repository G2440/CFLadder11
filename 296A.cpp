//Ladder11--:>Yaroslav and Permutations
#include<iostream>
using namespace std;

int main(){ 

    int x;
    cin>>x;
    int arr[x];
    int h[1001] = {0};
    for(int i = 0; i < x; i++){
        cin>>arr[i];
        h[arr[i]]++;
    }
    if(x==1)
    cout<<"YES"<<endl;
    else{
    int max = 0;

    for(int i =0  ; i < 1001; i++)
    if(h[i] !=0 && h[i] > max)
    max = h[i];
    int count =0;
    for(int i = 0 ; i < 1001;i++)
       if(h[i] == max)
       count++; 
   
    if(max == x)
    cout<<"NO"<<endl;
    else if(count == 2)
    cout<<"YES"<<endl;
    else{
        int sum = 0;
        for(int i =0 ; i < 1001;i++){
            if(h[i] != max && h[i] !=0)
            sum += h[i];
        }
        
       
        if(sum>=max)
        cout<<"YES"<<endl;
        else if(max-1==sum)
        cout<<"YES"<<endl;
        else  
        cout<<"NO"<<endl;
    }

    }
    return 0;
}