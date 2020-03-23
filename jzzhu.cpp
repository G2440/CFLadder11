//Ladder--:>Jzzhu and Children
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n , m ;
    cin>>n>>m;
    int arr[n];
    int max =0 ;
    for(int i = 0 ; i < n ; i++ ){
    cin>>arr[i];
    if(max<=arr[i])
    max = arr[i];
    }
    int cycle = ceil(max/m);
    int answer = 0;
    while(cycle--){
        for(int i = 0 ; i<n ; i++){
            if(arr[i]-m>0){
                arr[i] = arr[i] -m;
                answer = i +1;
            }
            else if(arr[i]-m<=0)
            arr[i] = 0;
        }
    }
    if(answer ==0)
    answer = n;
    cout<<answer<<endl;
    return 0;
}
