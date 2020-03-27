//Ladder--:>k-String
#include <iostream>
#include <string>
using namespace std;
int main(){
    int x;
    cin>>x;
    string s;
    cin>>s;
    int p = s.size()/x;
    char arr1[p];
    int arr[p];
    int count =0;
    char temp =0;
    string ans;
    int m = 0,n=0;
    for(int i = 0; s[i] !='\0' ; i++){
        if(s[i] != '0'){
        arr1[m] = s[i];
        m++;
        temp = s[i];
        for(int j = i +1; s[j] != '\0';j++ ){
            if(temp == s[j]){
               count++;
               s[j] = '0';
            }
        }
        arr[n] = count + 1;
        count=0;
        n++;
          }
    }
    int flag =0 ;
    for(int i =0 ; i < p ; i++){
        if(i+1<p){
        if(arr[i] != arr[i+1]){
            flag=1;
            break;
        }
        }
    }
    if(flag == 1)
    cout<<-1<<endl;
    else{
        while(x--){
        for(int i = 0 ; i< p ; i++){
            cout<<arr1[i];
        }
        }
    }
    return 0;
}
