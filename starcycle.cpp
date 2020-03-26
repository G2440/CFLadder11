//Ladder11--:> Bicycle Chain 
#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr1[x];
    for(int i =0 ; i < x; i++)
    cin>>arr1[i];
    int y;
    cin>>y;
    int arr2[y];
    for(int i =0 ; i < y; i++)
    cin>>arr2[i];
    int arr3[101]  = {0};
    int count =0 , max =0 , flag =0 ;
    for(int i = 0 ; i < x; i++){
             
        for(int j =0 ; j < y ; j++){
            if(arr1[i] == 1){
            count = 1;
            flag = 1;
            break;
            }
            else{
           if(arr2[j] % arr1[i] == 0){
               if(max<= (arr2[j]/arr1[i])){
                     max = arr2[j]/arr1[i];
                     arr3[i] = max;       
                   }
               }
           }
            }
        }
    if(arr1[0] != 1){
    int p =0 ;
    for(int i =0 ; i <101 ; i++){
         if(p<arr3[i])
         p = arr3[i];
    }
    for(int i = 0 ; i <101 ; i++){
        if(p == arr3[i])
        count++;
    }
    }
    
    cout<<count<<endl;
    return 0;
}