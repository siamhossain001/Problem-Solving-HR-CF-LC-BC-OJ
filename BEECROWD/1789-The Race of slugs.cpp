#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int level1,level2,level3,a;
    while(cin>>a){
    level1 = 0;
    level2 = 0;
    level3 = 0;
    
    int ar[a];
    
    for(int i=0;i<a;i++){
        cin>>ar[i];
    }
    
    for(int j=0;j<a;j++){
        if(ar[j]<10){
            level1++;
        }
        else if(ar[j]>=10 && ar[j]<20){
            level2++;
        }
        else {
            level3++;
        }
    }
    
    if(level3!=0){
        cout<<3<<endl;
    }
    else if(level2!=0){
        cout<<2<<endl;
    }
    else {
        cout<<1<<endl;
    }
    }   
    return 0;
}