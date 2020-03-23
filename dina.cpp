//Ladder11--:>Dina and Friends
#include <iostream>
using namespace std;
int main(){
    int friends;
    cin>>friends;
    int temp = friends;
    int sum =0;
    while(friends--){
        int c;
        cin>>c;
        sum+=c;
    }
    int x= temp + 1;
    int perm =0;
    for(int i=1 ;i<=5;i++){
        sum+=1;
        if((sum%x)==1)
        continue;
        else
        perm++;
    }
    cout<<perm<<endl;
    return 0;
}
