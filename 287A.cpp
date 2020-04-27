#include<iostream>

using namespace std;

int main(){
    
    char arr[4][4];
    int hash = 0, dot =0;
    for(int i =0 ; i < 4; i++)
        for(int j =0 ; j < 4 ;j++)
            cin>>arr[i][j];

    int flag =0;
    for(int i =0 ; i < 3 ;i++){
        
        for(int j =0; j<3 ;j++){
            hash =0;
            dot =0;
            if(arr[i][j]=='#')
            hash++;
            else  
            dot++;
            if(arr[i][j+1]=='#')
            hash++;
            else 
            dot++;
            if(arr[i+1][j+1] == '#')
            hash++;
            else 
            dot++;
            if(arr[i+1][j]=='#')
            hash++;
            else
            dot++;
            if(hash==4 || hash==0 || hash==1 || hash==3){
            flag =1;
            break;
            }
            }
        }
    
    if(flag == 1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;      
    
    return 0;
}