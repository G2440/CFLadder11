#include <iostream>
#include <algorithm>
using namespace std;
    struct data{
    int x;
    int y;
};
bool scheck(const data& l , const data& r){
    return l.x > r.x || (l.x == r.x && l.y < r.y);
}
int main(){
    int n,k;
    cin>>n>>k;
    struct data rank[50];
    for(int i =0 ; i < n ;i++)
        cin>>rank[i].x>>rank[i].y;
    sort(rank,rank+n,scheck);
    int key1 = rank[k-1].x;
    int key2 = rank[k-1].y;
    int count =0;
    for(int i =0 ; i < n; i++){
        if(rank[i].x== key1 && rank[i].y == key2)
        count++;
    }
    cout<<count<<endl;
    return 0;
}
