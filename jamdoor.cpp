//Ladder-:>Cupboards
#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    int p =test;
    int count1 =0 , count2 =0,count3=0,count4=0;
    while(p--){
        int test1=0,test2=0;
        cin>>test1>>test2;
        if(test1==0 && test2==1){
        count2+=2;
        count3++;
        count4++;
    }
        else if(test1 == 1 && test2==1){
        count1++;
        count2++;
        count3+=2;
        }
        else if(test1 == 1 && test2==0){
        count1 +=2;
        count3++;
        count4++;
        }
        else if(test1==0 && test2==0){
        count1++;
        count2++;
        count4+=2;
        }
        }
    int x = count1;
    if(x>=count2)
    x = count2;
    if(x>=count3)
    x = count3;
    if(x>=count4)
    x = count4;
    cout<<x<<endl;
    return 0;
}
