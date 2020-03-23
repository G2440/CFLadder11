//Ladder11--:>HelpFul Maths
#include <iostream>
using namespace std;
int main(){
    char test[101];
    cin>>test;
    int count =0 ;
    for(count =0 ; test[count] != '\0' ; count++);
    for(int i =0 ; i < count;i = i+2){
        for(int j =i+2 ; j < count; j = j+2){
            int flag =0 ;
            int x = test[i] - '0';
            int y = test[j] - '0';
            if(x>y)
            flag =1;
            if(flag==1){
            char temp = 0;
            temp = test[i];
            test[i] = test[j];
            test[j] = temp;
            }
        }
    }
    cout<<test<<endl;
    return 0;
}
