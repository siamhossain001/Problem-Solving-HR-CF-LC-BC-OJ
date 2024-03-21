#include<iostream>
using namespace std;

int main(){
    char line[1000000];
    int test;
    cin>>test;
    
    cin.ignore();
    while(test--){
    
    long long input;
    char *p,*e;
    int counter=0;
    p = line;
    scanf("%[^\n]",line);
    getchar();

    for(p = line ; ;p=e){
         input = strtol(p,&e,10);
         if(p==e){
            break;
         }
         counter++;
    }
    
    cout<<counter<<endl;
    
    }
    return 0;
}