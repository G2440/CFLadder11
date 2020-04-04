//Ladder11--:>Letter 
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    int arr1[26] = {0};
    int arr2[26] = {0};
    for(int i =0;i < s1.length();i++){
        if(s1[i] >=97)
        arr1[s1[i] - 'a']++;
        else if(s1[i] < 97 && s1[i] > 32)
        arr2[s1[i] - 'A']++;
    }
        int flag=0;
    for(int i =0 ; s2[i] !='\0';i++){
        if(s2[i] >=97){
        if(arr1[s2[i] - 'a'] == 0){
            flag = 1;
            break;
        }
        else if(arr1[s2[i] - 'a'] != 0)
        arr1[s2[i] - 'a']--;
    }
    else if(s2[i] <97 && s2[i] >32){
        if(arr2[s2[i] - 'A'] == 0){
            flag = 1;
            break;
        }
        else if(arr2[s2[i] - 'A'] != 0)
        arr2[s2[i] - 'A']--;
    }
    }
    if(flag == 1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    return 0;
}
