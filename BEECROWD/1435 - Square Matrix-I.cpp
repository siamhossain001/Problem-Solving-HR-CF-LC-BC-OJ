#include <iostream>
#include<stdio.h>
 
using namespace std;
 
int ar[100][100];

void pattern(int a){
     int B=0,C=a,count=1;
     int k;
     k = a/2;
     if(a%2)k++;
     while(k--){
     for(int i=B;i<C;i++){
        for(int j=B;j<C;j++){
             ar[i][j] = count;
        }
     }
     count++;
     B++;
     C--;
    }


}
int main() {
    int a,b=0;
    while(1){
        cin>>a;
        if(a==0)break;
        else{
            pattern(a);
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
   }
    return 0;
}