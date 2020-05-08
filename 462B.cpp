//Ladder11--:>Appleman and Card Game
#include<bits/stdc++.h>
#define ulli unsigned long long int
using namespace std;

int arr[26] = {0};

int main(){

    ulli n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i = 0; s[i]!='\0';i++)
    arr[s[i] - 65]++;
    sort(arr,arr+26,greater<int>());
    ulli sum =0,m=0;
    while(k){
        if(arr[m]<=k){
        ulli temp = arr[m];
        k -= temp;
        sum += temp * temp;
        m++;
        }
        else{
            ulli temp = k;
            k -=k;
            sum+=temp*temp;
        }
    }

    cout<<sum<<endl; 


    return 0;
}