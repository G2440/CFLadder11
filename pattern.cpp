//Ladder11--:>Present from Lena

#include<iostream> 
using namespace std; 
 
int main(){
    
    int x; 
    cin>>x;

    if(x==2){
        cout<<"    "<<0<<endl;
        cout<<"  "<<0<<" "<<1<<" "<<0<<endl;
        cout<<0<<" "<<1<<" "<<2<<" "<<1<<" "<<0<<endl;
        cout<<"  "<<0<<" "<<1<<" "<<0<<endl;
        cout<<"    "<<0<<endl;
    }
    else if (x==3){
        cout<<"      "<<0<<endl;
        cout<<"    "<<0<<" "<<1<<" "<<0<<endl;
        cout<<"  "<<0<<" "<<1<<" "<<2<<" "<<1<<" "<<0<<endl;
        cout<<0<<" "<<1<<" "<<2<<" "<<3<<" "<<2<<" "<<1<<" "<<0<<endl;
        cout<<"  "<<0<<" "<<1<<" "<<2<<" "<<1<<" "<<0<<endl;
        cout<<"    "<<0<<" "<<1<<" "<<0<<endl;
        cout<<"      "<<0<<endl;
    }
    else if(x==4){
        cout<<"        "<<0<<endl;
        cout<<"      "<<0<<" "<<1<<" "<<0<<endl;
        cout<<"    "<<0<<" "<<1<<" "<<2<<" "<<1<<" "<<0<<endl;
        cout<<"  " <<0<<" "<<1<<" "<<2<<" "<<3<<" "<<2<<" "<<1<<" "<<0<<endl;
        cout<<0<<" "<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<3<<" "<<2<<" "<<1<<" "<<0<<endl;
        cout<<"  "<<0<<" "<<1<<" "<<2<<" "<<3<<" "<<2<<" "<<1<<" "<<0<<endl;
        cout<<"    "<<0<<" "<<1<<" "<<2<<" "<<1<<" "<<0<<endl;
        cout<<"      "<<0<<" "<<1<<" "<<0<<endl;
        cout<<"        "<<0<<endl;
    }
    else if( x== 5){
        printf("          0\n");
        printf("        0 1 0\n"); 
        printf("      0 1 2 1 0\n");
        printf("    0 1 2 3 2 1 0\n"); 
        printf("  0 1 2 3 4 3 2 1 0\n"); 
        printf("0 1 2 3 4 5 4 3 2 1 0\n"); 
        printf("  0 1 2 3 4 3 2 1 0\n"); 
        printf("    0 1 2 3 2 1 0\n");
        printf("      0 1 2 1 0\n");
        printf("        0 1 0\n");  
        printf("          0\n");
    }    
    else if(x==6){
        printf("            0\n");
        printf("          0 1 0\n"); 
        printf("        0 1 2 1 0\n");
        printf("      0 1 2 3 2 1 0\n"); 
        printf("    0 1 2 3 4 3 2 1 0\n"); 
        printf("  0 1 2 3 4 5 4 3 2 1 0\n");
        printf("0 1 2 3 4 5 6 5 4 3 2 1 0\n"); 
        printf("  0 1 2 3 4 5 4 3 2 1 0\n"); 
        printf("    0 1 2 3 4 3 2 1 0\n"); 
        printf("      0 1 2 3 2 1 0\n");
        printf("        0 1 2 1 0\n");
        printf("          0 1 0\n");  
        printf("            0\n");
    }
    else  if(x==7){
        printf("              0\n");
        printf("            0 1 0\n"); 
        printf("          0 1 2 1 0\n");
        printf("        0 1 2 3 2 1 0\n"); 
        printf("      0 1 2 3 4 3 2 1 0\n"); 
        printf("    0 1 2 3 4 5 4 3 2 1 0\n");
        printf("  0 1 2 3 4 5 6 5 4 3 2 1 0\n"); 
        printf("0 1 2 3 4 5 6 7 6 5 4 3 2 1 0\n"); 
        printf("  0 1 2 3 4 5 6 5 4 3 2 1 0\n"); 
        printf("    0 1 2 3 4 5 4 3 2 1 0\n"); 
        printf("      0 1 2 3 4 3 2 1 0\n"); 
        printf("        0 1 2 3 2 1 0\n");
        printf("          0 1 2 1 0\n");
        printf("            0 1 0\n");  
        printf("              0\n");
    }
    else  if(x==8){
        printf("                0\n");
        printf("              0 1 0\n"); 
        printf("            0 1 2 1 0\n");
        printf("          0 1 2 3 2 1 0\n"); 
        printf("        0 1 2 3 4 3 2 1 0\n"); 
        printf("      0 1 2 3 4 5 4 3 2 1 0\n");
        printf("    0 1 2 3 4 5 6 5 4 3 2 1 0\n"); 
        printf("  0 1 2 3 4 5 6 7 6 5 4 3 2 1 0\n"); 
        printf("0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0\n"); 
        printf("  0 1 2 3 4 5 6 7 6 5 4 3 2 1 0\n");
        printf("    0 1 2 3 4 5 6 5 4 3 2 1 0\n"); 
        printf("      0 1 2 3 4 5 4 3 2 1 0\n"); 
        printf("        0 1 2 3 4 3 2 1 0\n"); 
        printf("          0 1 2 3 2 1 0\n");
        printf("            0 1 2 1 0\n");
        printf("              0 1 0\n");  
        printf("                0\n");
    }
     else  if(x==9){
        printf("                  0\n");
        printf("                0 1 0\n"); 
        printf("              0 1 2 1 0\n");
        printf("            0 1 2 3 2 1 0\n"); 
        printf("          0 1 2 3 4 3 2 1 0\n"); 
        printf("        0 1 2 3 4 5 4 3 2 1 0\n");
        printf("      0 1 2 3 4 5 6 5 4 3 2 1 0\n"); 
        printf("    0 1 2 3 4 5 6 7 6 5 4 3 2 1 0\n"); 
        printf("  0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0\n"); 
        printf("0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0\n"); 
        printf("  0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0\n"); 
        printf("    0 1 2 3 4 5 6 7 6 5 4 3 2 1 0\n");
        printf("      0 1 2 3 4 5 6 5 4 3 2 1 0\n"); 
        printf("        0 1 2 3 4 5 4 3 2 1 0\n"); 
        printf("          0 1 2 3 4 3 2 1 0\n"); 
        printf("            0 1 2 3 2 1 0\n");
        printf("              0 1 2 1 0\n");
        printf("                0 1 0\n");  
        printf("                  0\n");
    }


    
       
      
    return 0; 
} 
