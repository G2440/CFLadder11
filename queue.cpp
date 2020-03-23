#include<iostream> 
#include<cstdlib>
using namespace std;
int front = -1 ,rear = -1;



int main(){
    int size;
    cin>>size;
    int qarr[size];
    int test =0;
    for(int i =0 ; i < size;i++){
    cin>>test;
    rear = (rear+1)%size ;    
    qarr[rear] = test;
    }
    int count1 = 0,count2=0 ;
    int min = abs(qarr[0] - qarr[1]);
    for(int i = 0 ; i<=rear ; i++){
       int x = abs((qarr[i] - qarr[(i+1)%size]));
        if(x<=min){
            min = x;
            count1 = i+1;
            count2 = (i+1)%size + 1;
        }
    }
     cout<<count1<<" "<<count2<<endl;
    return 0;
}   
