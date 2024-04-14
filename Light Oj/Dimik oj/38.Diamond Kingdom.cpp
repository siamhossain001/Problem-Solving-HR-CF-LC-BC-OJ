#include <bits/stdc++.h>
using namespace std;
int main() {
    int N1,N2;
    int test;
    
    cin>>test;
    while(test--){
        cin>>N1>>N2;
        //part 1
        for(int i=1;i<=N1;i++){
            for(int j=1;j<=i;j++){
                if(j==i){
                    cout<<N2<<endl;
                }
                else {
                    cout<<N2<<" ";
                }
            }
        }
        //part 2
        int carry = N1;
        for(int i=N1-1;i>=1;i--){
            for(int j=1;j<=i;j++){
                if(j==i){
                    cout<<N2<<endl;
                }
                else {
                    cout<<N2<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
