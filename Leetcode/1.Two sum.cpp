#include<iostream>
using namespace std;
//bruth froce alg
int main(){
    
    int target;
    int a[5];
    cout<<"enter first 5 numbers"<<endl;
    
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"enter the terget value"<<endl;
    cin>>target;

     int m=2,sum=0,i,j;
    for( i=0;i<5;i++){
        for( j=i;j<m;){
            sum+=a[j];
            j++;
        }
                if(target==sum){
                    cout<<i<<" "<<j<<endl;
                    break;
                } 
        sum=0,m++;
    }
    return 0;
}