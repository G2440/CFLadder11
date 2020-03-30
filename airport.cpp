//Ladder11--:>Airport
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x , y ;
    cin>>x>>y;
    int comp = 0;
    int arr[y];
    int arr1[y];
    for(int i =0 ; i< y; i++){
        cin>>arr[i];
        arr1[i] = arr[i];
        comp+=arr[i];
    }
    sort(arr,arr+y);
    sort(arr1,arr1+y);
    int max=0;
    int count1=0;
    for(int i =y-1; i>=0;){
        if(i-1>=0){
        if(arr1[i]<arr1[i-1])
        i--;
        else
        {
            i = y -1;
        }
        
        }
        
        if(arr1[i] >0 && count1!=x){
            max +=arr1[i];
            arr1[i]--;
            count1++;
        }
        if(i==0 && x != count1)
        i = y - 1;
        if(x==count1)
        break ;
    }
    if(comp == x){
        cout<<max<<" "<<max<<endl;
    }
    else{
    int count2=0;
    int min =0;
     for(int i =0; i<y;){
        if(arr[i] == 0)
        i++;
        if(arr[i] >0 && count2!=x){
            min +=arr[i];
            arr[i]--;
            count2++;
        }
        if(x==count2)
        break ;
    }
    cout<<max<<" "<<min<<endl;
    }
    return 0;
}
