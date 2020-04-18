#include<iostream>
#include<cstring>
using namespace std;

int rec(char *a,int k,int b[5][5]);

int main(){

    int a[5][5];
    for(int i =0; i < 5;i++)
    for(int j =0; j < 5 ;j++)
    cin>>a[i][j];
    char w[6] = "12345"; 
    char x[6];
    cout<<rec(w,0,a);
    

    return 0;
}

int rec(char *a , int k ,int b[5][5]){
    static int arr1[10] = {0};  
     static char arr2[10];
     static int min= -200;
     static char ans[6];
     if(a[k] == '\0'){
     arr2[k] = '\0';
     static int fun =0;
     int d = arr2[0] - '0';
     int f = arr2[1] - '0';
     int g = arr2[2] - '0';
     int h = arr2[3] - '0';
     int j = arr2[4] - '0';
     fun = b[d-1][f-1] + b[f-1][d-1] + b[g-1][h-1] + b[h-1][g-1] + b[f-1][g-1] + b[g-1][f-1] + b[h-1][j-1] +  b[j-1][h-1] + b[g-1][h-1] + b[h-1][g-1]+ b[h-1][j-1] + b[j-1][h-1];   
     if(fun>min){
        min = fun;
     } 
    }
    else{   
        for(int i = 0; a[i] != '\0' ; i++){
            if(arr1[i]==0){
            arr2[k] = a[i];
            arr1[i] = 1;
            rec(a,k+1,b);
            arr1[i] = 0; 
        }
    }
}
return min;
}