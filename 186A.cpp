//Ladder11--:>Comparing Strings

#include<iostream> 
#include<string> 
using namespace std;

int main(){
    
    string s;
    cin>>s;
    string r;
    cin>>r;
    int rule = 0;
    char arr1[100000] = {0};
    char arr2[100000] = {0};
    int p =0; 
    if(s.length()!=r.length())
    cout<<"NO"<<endl;
    else{
    for(int i =0 ;s[i] != '\0';i++){
        if(s[i] != r[i]){
        rule++;
        arr1[p] = s[i];
        arr2[p] = r[i];
        p++;
        }


    } 
      if(rule==2 && arr1[0] == arr2[1] && arr1[1]==arr2[0] )
    cout<<"YES"<<endl;
    else   
    cout<<"NO"<<endl;

    }
  

//     int flag =0;
//     for(int i =0 ; i < s.length()-1 ; i++){
//         char t = s[i];
//         for(int j = i+1;j<s.length() ; j++){
//             s[i] = s[j];
//             s[j] = t;
//             if(s == r){
//                 flag = 1;
//                 break;
//             }
//             else{
//                 char x = s[i];
//                 s[i] = s[j];
//                 s[j] = x;
//             }
//         }
//       if(flag == 1)
//       break;

//     }
//    if(flag == 0)
//    cout<<"NO"<<endl;
//    else 
//    cout<<"YES"<<endl;
  
    return 0;
}