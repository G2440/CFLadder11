//Ladder11--:>Puzzles

#include <bits/stdc++.h> 

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int arr1[y];
    for(int i =0 ; i < y;i++)
    cin>>arr1[i];
    int  n = sizeof(arr1)/sizeof(arr1[0]);
    sort(arr1,arr1+n);
    int arr4[1001] = {0};
    int m =0;
    for(int i=0 ; i<y ; i++){
        if(m < 1001){
        if((i+x-1) <y ){    
        int temp = arr1[i+x-1] - arr1[i];
        arr4[m] = temp;
        m++; 
        }
        else
        break;
        }
    }
 
    int b = arr4[0];
    for(int i =0 ; i < m; i++){
        if(b>arr4[i])
        b = arr4[i];
    }
    cout<<b<<endl;

 
    return 0;
}

