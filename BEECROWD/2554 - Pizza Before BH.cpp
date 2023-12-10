#include <iostream>
#include <string>

using namespace std;

int ar[100];
int main() {
     int a,b,c,max,possition,total,numbers;

     while(cin>>a>>b){
        string dates[b];
        for(int i=0;i<b;i++){
            cin>>dates[i];
               for(int j=0;j<a;j++){
                cin>>numbers;
                total+=numbers;
               }
            ar[i] = total;
            total = 0;
        }
        
        max = ar[0];
        for(int i=1;i<a;i++){
            if(max<ar[i]){
                max = ar[i];
                possition = i;
            }
        }

        ar[possition] = 0;
        for(int i=0;i<a;i++){
            if(ar[i]==max){
                possition = -1;
            }
        }

        if(possition!=-1){
            cout<<dates[possition]<<endl;
        }
        else{
            cout<<"Pizza antes de FdI"<<endl;
        }
     }
    
    return 0;
}