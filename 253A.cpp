#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int b,g;
    cin>>b>>g;
    string res;
    int flag =0;
    if(b==g){
        for(int i =0 ; i<(b+g);i++)
        if(flag==0){
            res+='G';
            flag=1;
        }
        else if(flag==1){
            res+='B';
            flag =0;
        }
    }
    if(b>g){
        flag =0;
        int x = b-g;
        int y = x;
        while(y--){
            res+='B';
        }
        b = b- x;
        for(int i =0 ; i<(b+g);i++)
        if(flag==0){
            res+='G';
            flag=1;
        }
        else if(flag==1){
            res+='B';
            flag =0;
        }
    }
    else if(g>b){
        flag = 0;
        int x = g-b;
        int y = x;
        while(y--)
        res+='G';
        g = g- x;
        for(int i =0 ; i<(b+g);i++)
        if(flag==0){
            res+='B';
            flag=1;
        }
        else if(flag==1){
            res+='G';
            flag =0;
        }
    }

    cout<<res<<endl;

    return 0;
}