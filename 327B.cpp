//Ladder11--:>Hungry Sequence
#include<iostream>
using namespace std;
 
 
int prime(int n); 

int main(){

  int x;
  cin>>x;
  int t0 = 5 ;
  int t1 = 8;
  int total;

  for(int i = 1 ; i <= x; i++){
      total = t0 + t1;
      cout<<total<<" ";
      t0 = t1;
      t1 = total;
      total = 0;
  }

return 0;

}


























//     int x;
//     cin>>x;
//     long long int  i = 2;
//     int p =0;
//     while(x>p){
//         if(prime(i)){
//             if(i <= 10000000){
//             cout<<i<<" ";
//             p++;
//             }
//             else 
//             break;
//         }
//         i++;
//     }
    
//      return 0;   
// }

// int prime(int n)
// {
//  for (int l = 2; l <= n/2; l+=1) 
//       if ( n% l == 0) 
//            return 0;
//     return 1;          
// }