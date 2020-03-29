//Ladder11--:>Dragons
#include<iostream> 
using namespace std;

int main(){
    
    int x,y;
    cin>>x>>y;
    int str[y] , bon[y];
    for(int i =0 ; i < y ; i++)
    cin>>str[i]>>bon[i];
    int flag =0 ;
   
    for(int i =0 ; i < y-1; i++){
        for(int j = i +1 ; j < y;j++){
            if(str[i]>str[j]){
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                int temp1 = bon[i];
                bon[i] = bon[j];
                bon[j] = temp1;
            }
        }
    }

    for(int i = 0 ; i < y; i++){
        if(x>str[i])
        x+= bon[i];
        else{
            flag = 1;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(flag== 0)
    cout<<"YES"<<endl;
 
    return 0; 
}