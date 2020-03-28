#include <iostream>
#include <string>
using namespace std;
int main(){
    int x;
    string inp;
    cin>>x;
    cin>>inp;
    for(int i = 0 ; i < (inp.length()) ;i++){
         int min = i;
         for(int j = i+1; j < (inp.length()) ; j++){
             if(inp[j] < inp[min])
                min = j;
         }
         char lol = inp[i];
         inp[i] = inp[min];
         inp[min] = lol;
    } 
    string ans;
    int count =0 ;
    int flag=0; 
    for(int i =0 ; inp[i] != '\0' ; i++){
       if(inp[i] != '0'){
          char temp = inp[i];
          for(int j = i ; inp[j] != '\0' ; j++){
              if(temp == inp[j]){
                  count++;
                  inp[j] = '0';
              }
          }
          if(count%x==0){
            ans +=temp;
            count=0; 
          }
          else{
              flag =1;
              break;
          }
       } 
    }

    if(flag==1)
    cout<<-1<<endl;
    else{
        while(x--){
            cout<<ans;
        }
    }
    
    return 0;
}
