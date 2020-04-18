#include<iostream>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    int b=0,g=0;
    cin>>b>>g;
    int flag =0;
    if(b==g){
        for(int i =0 ; i<(b+g);i++)
        if(flag==0){
            cout<<'G';
            flag=1;
        }
        else if(flag==1){
            cout<<'B';
            flag =0;
        }
    }
    else if(b>g){
        flag =0;
        int x = b-g;
        int y = x;
        while(y--){
            cout<<'B';
        }
        b = b- x;
        for(int i =0 ; i<(b+g);i++)
        if(flag==0){
            cout<<'G';
            flag=1;
        }
        else if(flag==1){
            cout<<'B';
            flag =0;
        }
    }
    else if(g>b){
        flag = 0;
        int x = g-b;
        int y = x;
        while(y--)
            cout<<'G';
        g = g- x;
        for(int i =0 ; i<(b+g);i++)
        if(flag==0){
            cout<<'B';
            flag=1;
        }
        else if(flag==1){
            cout<<'G';
            flag =0;
        }
    }



    return 0;
}