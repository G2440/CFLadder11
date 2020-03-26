//Ladder11--:>Sale
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int x , y;
    cin>>x>>y;
    int arr[x];
    for(int i =0 ; i < x; i++)
    cin>>arr[i];
    int min = arr[0] ;
    int var= 0;
    int sum =0;
    while(y--){
    for(int i =0 ; i < x ; i++){
        if(arr[i]<0){
        if(min > arr[i]){
        min = arr[i];
        var = i;
        }
        }
    }
    if(arr[var]<0){
    arr[var] = 1001;
    sum += min;
    min = arr[var];
    }
    }
    cout<<abs(sum)<<endl;
    return 0;
}
 