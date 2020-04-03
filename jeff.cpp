//Ladder11--:> Jeff and Periods 
#include <iostream>
using namespace std;
int main(){
    unsigned long long int x;
    cin>>x;
    int counter[100000] ={-1};
    for(int i =0 ; i < 100000;i++)
    counter[i] = -1;
    unsigned long long int arr[x];
    unsigned long long int ans=0;
    for(int i =0 ; i< x; i++){
    cin>>arr[i];
    unsigned long long int temp = arr[i];
    counter[temp]++;
    }
    for(int i =0 ; i < 100000;i++)
    if(counter[i] != -1)
    ans++;
    unsigned long long int arr1[ans];
    unsigned long long int arr2[ans];
    int ap =0 ,l=0 , flag1 =0,flag2=0,flag3=0,flag4 =0 ;
    for(int i =0 ; i < x; i++){
        int x = arr[i];
        ap =0,flag4=0;
        if(x!=0){
        for(int j = i+1; j < x;j++){
            if(arr[i] == arr[j]){
                if(flag1 == 1){
                   if(ap != j-i){
                       flag2=1;
                       break;
                   }
                }
                ap = j - i;
                flag1 = 1;
                flag4 =1;
            }
        }
        }
        if(flag2 ==1){
            flag3=1;
            break;
        }
        else if (l < ans && flag4 ==1){
            arr[l] = ap ;
            l++;
        }
        else if(l == ans)
        break;
    }
    if(flag3==1)
    cout<<0<<endl;
    else{
    int p =0;
    for(int i =0 ; i < 100000 ; i++){
    if(p == ans)
    break;
    if(counter[i] !=-1 && p < ans){
        arr1[p] = i;
        p++;
    }
    }
    cout<<ans<<endl;
    for(int i =0 ; i < ans; i++)
    cout<<arr1[i]<<" "<<arr2[i]<<endl;
    }
    return 0;
}
