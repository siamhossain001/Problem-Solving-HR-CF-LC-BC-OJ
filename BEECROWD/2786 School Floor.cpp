#include<iostream>
using namespace std;

int main(){
    int L,C,type1,type2;

    cin>>L>>C;

    type1 = (L*C)+(L-1)*(C-1);
    type2 = ((L-1)*2)+((C-1)*2);

    cout<<type1<<endl;
    cout<<type2<<endl;
    return 0;
}