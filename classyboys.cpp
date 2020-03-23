////Ladder11--:> Queue at the School

#include<iostream>
using namespace std;

int main(){

    int test, test1;
    cin>>test>>test1;
    
    char arr[test];
    cin>>arr;

    while(test1--){
        for(int i =0 ; i < test-1 ; i++){
            if(arr[i] == 'B' && arr[i+1] == 'G'){
                arr[i] = 'G';
                arr[i+1] = 'B';
                i = i +1;
            }
        }
    } 
    cout<<arr<<endl;
    

    return 0;
}
