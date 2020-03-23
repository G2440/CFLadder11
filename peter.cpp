//Ladder--:>Petr and Book
#include<iostream>
using namespace std;

int main(){
    

    int total;
    cin>>total;
    int week[8];
    int count=0;
    int rando=0;
    for(int i =1 ; i < 8 ; i++){
    cin>>week[i];  
    }
    int i =1;
    while(rando<total && i< 8 ){
        if(week[i]!=0){
        rando +=week[i];
        count = i;
        }
        if(i==7)
        i =1;
        else
        i++;
    }

    cout<<count<<endl;

    return 0;
}


//   if(rando < total && week[i] > 0){
//         rando+=week[i];
//         count = i+1;
//     }