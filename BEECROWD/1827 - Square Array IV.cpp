#include <iostream>
 
using namespace std;
 
int ar[101][101];
void Array_Clerar(int a){
      for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            ar[i][j] = 0;
        }
      }
}
void printer(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<ar[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}
void Pattern2(int a){
      int Start = a/3;
      int End = a-Start;
      for(int i=Start;i<End;i++){
        for(int j=Start;j<End;j++){
            ar[i][j] = 1;
        }
      }
    if(a%2){
        ar[a/2][a/2] = 4;
    }
    printer(a);
}
void Pattern1(int a){
     int b = a-1;
     for(int i=0;i<a;i++){
        ar[i][i] = 2;
        ar[i][b] = 3;
        b--;
     }
     Pattern2(a);     
}
int main() {
    int a;
    while(cin>>a){
         Pattern1(a);
         Array_Clerar(a);
    }

    return 0;
}