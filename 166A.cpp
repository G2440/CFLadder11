#include <bits/stdc++.h>
using namespace std;

bool sortbysecdesc(const pair<int,int> &a, 
                   const pair<int,int> &b) 
{      
       return a.second<b.second;
 
}
int main(){
    int n ,k ;
    cin>>n>>k;
    vector<pair<int,int>> pairs;
    int arr1[n] , arr2[n];
    for (int i =0 ; i < n ;i++){
    cin>>arr1[i]>>arr2[i];
    pairs.push_back(make_pair(arr1[i] , arr2[i]));
    }
    int count=0;
    
    int p =0;
    int i =0 , j =0;
    sort(pairs.begin(), pairs.end(),greater<pair<int,int>>());
    for(int k = 0 ;k < n ; k++)
    cout<<pairs[k].first<<" "<<pairs[k].second<<endl;
    int var =0 ;
    for(int i =0 ;i < n ; i++){
        p=i;
       for(int j = i;j<n;j++){
           if(pairs[i].first == pairs[j].first)
           var++;
           else  
           break;
       }
       
       if(pairs[i].first<pairs[j].first){
       sort(pairs.begin()+p, pairs.begin()+var+1,sortbysecdesc);
       }
       var = p;
    }
    int key1 = pairs[k-1].first;
    int key2 = pairs[k-1].second;

    for (int h=0; h<n; h++)
    {        
            if(pairs[h].first == key1 && pairs[h].second==key2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
