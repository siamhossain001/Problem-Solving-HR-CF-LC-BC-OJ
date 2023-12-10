#include <iostream>
 
using namespace std;
 
void winteam(int a,int b){
    if(a>b){
       cout<<"Inter venceu mais"<<endl;
    }
    else if(a<b){
        cout<<"Gremio venceu mais"<<endl;
    }
    else {
        cout<<"Não houve vencedor"<<endl;
    }
}
int main() {
 
    
    int a,b;
    int p1=0,p2=0,dr=0,c=0,d=1;
    while(1){
       cin>>a>>b;
       
       if(a>b)p1++;
       else if(a<b)p2++;
       else if(a==b)dr++;
       
       cout<<"Novo grenal (1-sim 2-nao)"<<endl;
       cin>>c;
       if(c==2)break;
       else{
           d++;
       }
    }
    cout<<d<<" grenais"<<endl;
    cout<<"Inter:"<<p1<<endl;
    cout<<"Gremio:"<<p2<<endl;
    cout<<"Empates:"<<dr<<endl;
    winteam(p1,p2);
    
    return 0;
}