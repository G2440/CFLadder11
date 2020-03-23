//Ladder11--:>Effective Approach 
#include <iostream>
using namespace std;
int main(){
    
    int a1 , a2;
    cin>>a1;
    int arr[1000000];
    for(int i =0; i < a1 ; i++){
        int x;
        cin>>x;
        arr[x] = i +1; 
    }
    cin>>a2;
   long long  int vayc =0, petc =0;
    for(int i =0 ; i < a2;i++){
        int a;
        cin>>a;
        vayc += arr[a];
        petc += a1-arr[a]+1;
    };
    cout<<vayc<<" "<<petc<<endl;

    return 0;
}
