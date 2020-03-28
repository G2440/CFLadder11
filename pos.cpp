//Ladder11--:>The number of positions 
#include <iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int count =0;
    if(a ==0 && b !=0)
    count = b+1;
    else if(a ==0 && b ==0)
    count = n ;
    else if(a !=0 && b ==0)
    count = n -a;
    else if(a !=0 && b !=0){
        if(a+b == n)
        count = b;
        else if ( a+ b > n )
        count = n-a;
        else
        count = b+1;
    }
    
    cout<<count<<endl;
    return 0;
}
