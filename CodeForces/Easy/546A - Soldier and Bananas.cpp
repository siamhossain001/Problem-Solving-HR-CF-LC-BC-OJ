#include <iostream>
 
using namespace std;

int main() {
    int k,n,w,count=1;
    int dollers,needDoller;
    cin>>k>>n>>w;

    dollers = w * (w + 1) / 2 * k;
    
    needDoller = max(0,dollers-n);
    cout<<needDoller<<endl;
    

    return 0;
}