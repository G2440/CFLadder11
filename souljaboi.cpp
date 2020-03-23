#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    int arr[test];
    int max =0, min=0,time=0 , ma =0, mi=0;
    for(int i =0 ; i < test ; i++)
    cin>>arr[i];
    min = arr[0];
    for(int i =0 ; i<test;i++){
        if(arr[i] < min){
            min = arr[i];
            mi = i;
        }
        if(arr[i] == min){
            min = arr[i];
            mi = i;
        }
    }
    for(int i = 0 ; i < test ; i++){
        if(mi != test-1){
            int temp = arr[mi];
            arr[mi] = arr[mi+1];
            arr[mi+1] = temp;
            mi = mi+1;
            time++;
        }
        else{
            break;
        }
    }
    max = arr[0];
 for(int i =0 ; i<test;i++){
        if(arr[i] > max){
        max = arr[i];
        ma = i;
        }
    }
    for(int i = 0 ; i < test ; i++){
        if(ma != 0){
            int temp = arr[ma];
            arr[ma] = arr[ma-1];
            arr[ma-1] = temp;
            ma = ma-1;
            time++;
        }
        else{
            break;
        }
    }
    cout<<time<<endl;
    return 0;
}