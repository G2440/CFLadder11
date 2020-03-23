//Ladder11--:>Little Elephant and Rozdil
#include <iostream>
using namespace std;
int main(){
    int x ;
    cin>>x;
    int min =0;
    int count=0;
    int flag1=0 ;
    int flag2 = 0;
    int temp =0;
    int p =0;
    while(x--){
        int test;
        cin>>test;
        if(flag1 == 0){
        min = test;
        flag1 =1;
        }
        else{
        if(test<min){
           min = test;
           p = count;
        }
        else if(test==min){
            temp = test;
        }
        }
        count++;
    }
    if(min==temp)
    cout<<"Still Rozdil"<<endl;
    else
    cout<<p+1<<endl;
    return 0;
}
