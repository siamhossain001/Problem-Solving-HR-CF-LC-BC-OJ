#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
    int N;
    int test;

    cin>>test;
    while(test--){
        char matrix[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>matrix[i][j];
            }
        }
        
        bool flag = false;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(matrix[j][i]>='a' && matrix[j][i]<='z'){
                    cout<<matrix[j][i];
                    flag = true;
                }
            }
            if(flag){
                cout<<endl;
                break;
            }
        }
    }
    return 0;
}