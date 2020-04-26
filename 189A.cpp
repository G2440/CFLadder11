#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int x,y,z,p=0,i;
    i=min(a,min(b,c));
    i=n/i;
    
    for(int x =0 ; x<=i ; x++){
        for(int y =0; y <=i ;y++){
            int zc = (n- (a*x + b*y));
            if(zc<0)
            break;
            else
            {  double z = zc/(double)c;
                if(z == (int)z){
                    if(p<x+y+z)
                    p = x+ y + z;
                }
            }
            
        }
    }
    



    cout<<p<<endl;
    return 0;
}