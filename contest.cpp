//Ladder11-:>I_love_%username%
#include <iostream>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    int arr[cases];
    for(int i =0 ; i < cases;i++){
        cin>>arr[i];
    }
    int counter1 =0 ,counter2=0;
    int temp =0;
    int temp1=0;
    for(int i =0 ; i< cases-1; i++){
        if(cases == 1){
            counter1= 0;
            break;
        }
        else if(i<cases-1)
         temp = arr[i+1];
        int flag =0;
        for(int j = 0 ; j <=i ; j++){
            if(temp > arr[j])
                flag =1 ;
            else{
            flag =0;
            break;
            }
        }
        if(flag==1)
        counter1++;
    }
    for(int i =0 ; i< cases-1; i++){
        if(cases == 1){
            counter2= 0;
            break;
        }
        else if(i<cases-1)
         temp1 = arr[i+1];
        int flag =0;
        for(int j = 0 ; j <=i ; j++){
            if(temp1 < arr[j])
                flag =1 ;
            else{
            flag =0;
            break;
            }
        }
        if(flag==1)
        counter2++;
    }
    cout<<counter1+counter2<<endl;
    return 0;
}
