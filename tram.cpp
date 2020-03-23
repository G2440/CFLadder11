//Ladder-:>Tram
#include<iostream>

using namespace std;

int main(){
    
    int cases;
    cin>>cases;
    int max =0 , counter =0 ;
    while(cases--){
        int a , b;
        cin>>a>>b;
        counter = counter +b-a;
        if(counter>max)
        max = counter;
    }  
cout<<max<<endl;
    return 0;
}