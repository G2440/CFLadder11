#include<iostream>
using namespace std;

int main(){

    // freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

    int p;
    cin>>p;
    int x = 2 *p;
    int check[5001] = {0};
    int arr[x];
    for(int i =0 ; i <x ;i++){
        cin>>arr[i];
        check[arr[i]]++;
    } 
    int flag =0;
    for(int i =0 ; i < 5001; i++)
    if(check[i]!=0){
        if(check[i] %2 !=0){
        flag = 1;
        break;
        }
    }
    if(flag == 1)
    cout<<-1<<endl;
    else{
        int test =0;
        for(int i =0 ; i < x-1;i++){
            if(arr[i] != -1){
                for(int j =i+1 ; j < x; j++){
                    if(arr[i] == arr[j]){
                        cout<<i+1<<" "<<j+1<<endl;
                        arr[i] = -1;
                        arr[j] = -1;
                        test++;
                        break; 
                    }
                }
            }
            if(test == p)
            break;
        }
    } 
    return 0;
}