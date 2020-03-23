//Ladder11-:>Panoramix's Prediction

#include<iostream>

using namespace std;

int main(){

    int test1 , test2;
    cin>>test1>>test2;
    for(int i = test1+1 ; i <=test2 ; i++){
        int flag = 1;//Prime
        for(int j =2 ; j <i ; j++){
            if(i%j==0)
            flag = 0;//NOT A PRIME
        }
        if(i == test2 && flag==1){
            cout<<"YES"<<endl;
            break;
        }
        else if(i < test2 && flag == 1){
            cout<<"NO"<<endl;
            break;
        }
        else if( i == test2 && flag == 0){
            cout<<"NO"<<endl;
            break;
        }
    }


    return 0;
}