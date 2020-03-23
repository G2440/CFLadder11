//Ladder11-:>Insomnia Cure
#include <iostream>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int arr[d+1];
    for(int i =1 ; i<d+1 ; i++)
    arr[i] =i ;
    int p = k , q = l , r = m , s = n;
        for(int j = 1 ; j <d+1 ; j++ ){
            if(j ==p ){
                arr[j] = 0;
                p +=k;
            }
        }
        for(int j = 1 ; j <d+1 ; j++ ){
             if(j ==q ){
                arr[j] = 0;
                q +=l;
            }
        }
        for(int j = 1 ; j <d+1 ; j++ ){
             if(j ==r ){
                arr[j] = 0;
                r +=m;
            }
        }
        for(int j = 1 ; j <d+1 ; j++ ){
             if(j ==s ){
                arr[j] = 0;
                s +=n;
            }
        }
    int count =0;
    for (int i = 1; i < d+1; i++)
    {
        if(arr[i]!=0)
        count++;
    }
    cout<<d-count<<endl;
    return 0;
}
