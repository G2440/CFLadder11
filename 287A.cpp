#include<iostream>

using namespace std;

int main(){
    
    char arr[4][4];
    int hash = 0, dot =0;
    for(int i =0 ; i < 4; i++)
        for(int j =0 ; j < 4 ;j++){
            cin>>arr[i][j];
            if(arr[i][j] == '#')
            hash++;
            else  
            dot++;
        }
    int flag =0;
    for(int i =0 ; i < 3 ;i++){
        for(int j =0; j<3;j++){
            if(arr[i][j]==arr[i][j+1] && arr[i][j+1] == arr[i+1][j+1] && arr[i+1][j+1] == arr[i+1][j]){
            flag =1;
            break;
            }
        }
    }        
    if(flag == 1)
    cout<<"YES"<<endl;
    else{
        if(dot==8 && hash==8)
        cout<<"NO"<<endl;
        else  
        cout<<"YES"<<endl;  
    }
    return 0;
}