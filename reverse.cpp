//Ladder11--:>Translation

#include<iostream>
using namespace std;

int main(){
    char arr1[101];
    char arr2[101];
    cin>>arr1;
    cin>>arr2;
    int x =0, y=0 , flag =0;
    for(x=0; arr1[x] != '\0' ; x++);
    for(y=0; arr2[y] != '\0' ; y++);
    if(x!=y){
    cout<<"NO"<<endl;
    flag=1; 
    }
    else
    {   int j = y-1;
        for(int i =0 ; i < x ; i++){
            if(arr1[i] == arr2[j]){
            j--;
            }
            else{
                flag = 1;
                cout<<"NO"<<endl;
                break;
            }

        }
    }

    if(flag == 0)
    cout<<"YES"<<endl;
return 0;
    
}