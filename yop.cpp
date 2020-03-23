//Ladder11--:> Young Physicist

#include<iostream>

using namespace std;

int main(){

    int test;
    cin>>test;
     int sum =0 ;
    int arr[test][3];
    for(int i =0 ; i < test ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin>>arr[i][j];
            sum += arr[i][j];
        }
    }
   
            int sumx= 0;
            int sumy =0;
            int sumz =0; 
    for(int i =0 ; i < test ; i++){
         sumx += arr[i][0];
         sumy += arr[i][1];
         sumy += arr[i][2];
    };


    if(sum == 0 && sumx == 0 && sumy == 0 && sumz == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}