#include <iostream>
using namespace std;

int ar[100][100];
void pattern(int a){
    int num=1;
    for(int i=0;i<a;i++){
        for(int j=i;j<a;j++){
             ar[i][j]=num;
             ar[j][i]=num;
             num++;
        }
        num=1;
    }
}
void printer(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
          if(j==0){
           printf("%3d",ar[i][j]);
          }
          else{
            printf(" %3d",ar[i][j]);
          }
        }
        cout<<endl;
    }
}
int main() {
 
    

    int a;
    while(1){
        cin>>a;
        if(a==0)break;
        else{
         pattern(a);
         printer(a);
         cout<<endl;
        }
    }

    return 0;
}
