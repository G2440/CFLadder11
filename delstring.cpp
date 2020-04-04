//Ladder11--:>Little Girl and Game
#include<iostream> 
#include<string> 
using namespace std;


int main(){

    string s;
    cin>>s;
    int arr[26] = {0};
    int count=0;
    for(int i =0 ; s[i] !='\0' ; i++ )
    arr[s[i] - 'a']++; 

    int odd =0 , even=0; 
    for(int i =0 ; i < 26; i++){
        if(arr[i] !=0){
            if(arr[i] %2 ==0)
            even++;
            else 
            odd++;
    }
        }

    if(even >=1 && odd<=1)
    cout<<"First"<<endl;
    else{
        if(odd%2==0)
        cout<<"Second"<<endl;
        else  
        cout<<"First"<<endl;
    }



    return 0;
}