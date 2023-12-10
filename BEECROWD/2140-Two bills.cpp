#include <iostream>
#include<cmath>

using namespace std;
 
int main() {
 
    int ok,a,b,c,diffrent;
    
    int ar[]={2,5,10,20,50,100};
    
    while(1){
        cin>>a>>b;
        ok=0;
        if(a==0 && b==0){
            break;
        }
        else {
            diffrent = abs(a-b);
            for(int i=0;i<6;i++){
                for(int j=0;j<6;j++){
                    if(ar[i]+ar[j]==diffrent && ar[i]!=ar[j]){
                        ok=1;break;
                    }
                }
                if(ok){
                    break;
                }
            }
            if(ok){
                    cout<<"possible"<<endl;
            }
            else{
                cout<<"impossible"<<endl;
            }
        }
    }
    return 0;
}