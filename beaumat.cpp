////Ladder11--:> Beautiful Matrix

#include<iostream>

using namespace std;
  int abso(int p){
        return ((p<0) ? (-p) : (p));
    }
int main(){
    
    int arr[6][6];
    int magx = 0, magy =0 ;
    for(int i =1; i < 6; i++ ){
        for(int j =1 ; j <6 ; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                magx = i;
                magy = j;
            }
        }
    }
    
  
    
    int x  = 3 - magx;
    int y  = 3 - magy;
    int final = abso(x) + abso(y);
    cout<<final<<endl;
    return 0;
}