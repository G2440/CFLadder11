//Ladder11-:>Ultra-Fast Mathematician
#include <iostream>
using namespace std;
int main(){

    char num1[101] = {'\0'};
    char num2[101] = {'\0'};
    cin>>num1;
    cin>>num2;
    int m =0;
    while(num1[m] != '\0'){
    m++;
    };
    m++;
    char num3[m];
    for(int i = 0 ; i < m-1 ; i++){
        if(num1[i] == num2[i])
        num3[i] = '0';
        else
        num3[i] = '1';
    }

    for(int i =0 ; i < m-1 ; i++)
    cout<<num3[i];

    return 0;
}
//TRY IT WITH RECURSION 
//TRY IT WITHOUT ARRAY
//TRY IT WITH INT

   // long long int test1;
    // long long int test2;
    // cin>>test1;
    // cin>>test2;
    // long long int len =0;
    // long long int x =0;
    // if(test1==0)
    // x = test2;
    // else if((test1== 0 && test2 == 0) || (test1==1 && test2==1))
    // x = 1;
    // else
    // x =test1;
    // while(x>0){
    //     x /=10;
    //     len++;
    // };
    // long long int c = len;
    // long long int test3[len];
    // while(test1>=0 && test2>=0 && c>0){
    //     int temp1=0,temp2=0;
    //     temp1 = test1%10;
    //     temp2 = test2%10;
    //     cout<<temp1<<" "<<temp2<<endl;
    //     if(temp1!=temp2)
    //     test3[c] = 1;
    //     else
    //     test3[c] = 0;
    //     test1 /= 10;
    //     test2 /= 10;
    //     c--;
    // }
    // for(int i=1;i<=len;i++){
    // cout<<test3[i];
    // }
    // cout<<endl;
    