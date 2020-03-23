    //Ladder11--:>Way Too Long Words
    #include <iostream>
    using namespace std;
    int main(){
        int cases;
        cin>>cases;
        while(cases--){
            char arr[101];
            cin>>arr;
            int c= 0;
            for(c =0 ; arr[c] !='\0' ; c++);
            if(c>10)
            cout<<arr[0]<<c-2<<arr[c-1]<<endl;
            else{
                cout<<arr<<endl;
            }
        }
        return 0;
    }
