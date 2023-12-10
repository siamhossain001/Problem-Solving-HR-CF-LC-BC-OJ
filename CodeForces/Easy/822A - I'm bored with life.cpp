#include <iostream>
#include <cmath>
#include<algorithm>

using namespace std;

int main(){
    
    long long int a,b;
    cin>>a>>b;
    
    long long int answer=1;
    for(int i=1;i<=min(a,b);i++){
        answer*=i;
    }
    cout<<answer<<endl;
    return 0;
}
