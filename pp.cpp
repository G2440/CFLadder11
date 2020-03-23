//Ladder11-:>Perfect Permutation
#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    int arr[test+1];
    if(test == 1){
        cout<<-1<<" ";
    }
    else{
        int i =1;
        int temp = test;
        while(temp>0 && i<=test){
            arr[i] = temp;
            i++;
            temp--;
        }
    }
    int flag =0;
    if(test !=1){
    for(int j=1;j<=test;j++){
        if(j==arr[j]){
            flag =0;
            cout<<-1<<endl;
            break;
        }
        else{
            flag = 1;
        }
    }
    }
    if(flag == 1){
  for(int j=1;j<=test;j++)
        cout<<arr[j]<<" ";
    }
    return 0;
}
