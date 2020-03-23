//Ladder--:>Team
#include <iostream>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    int count =0;
    while(cases--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1&&b==1&&c==1)
        count++;
        else if(a==0&&b==1&&c==1)
        count++;
        else if(a==1&&b==1&&c==0)
        count++;
        else if(a==1&&b==0&&c==1)
        count++;
    }
    cout<<count<<endl;
    return 0;
}
