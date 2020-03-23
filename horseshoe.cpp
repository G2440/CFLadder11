//Ladder11--:>Is your horseshoe on the other hoof?
#include <iostream>
using namespace std;
int main(){
    int arr[4];
    int count=0;
    for(int i =0; i <4;i++)
    cin>>arr[i];
    for(int i =0;i<4;i++){
        for(int j = i ; j < 3 ; j++){
            if(arr[i]>arr[j + 1]){
                int t = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
for(int i =0; i <3;i++){
        if(arr[i] == arr[i+1])
        count++;
}
cout<<count<<endl;
}
