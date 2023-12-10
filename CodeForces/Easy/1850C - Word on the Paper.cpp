#include <iostream>
#include <algorithm>
#include <vector> 
#include <cmath>

using namespace std;

int main() {
    char word[8][8];
    int test;

    cin>>test;

    while(test--){

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>word[i][j];
        }
    }

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(word[i][j]>='a' && word[i][j]<='z'){
                cout<<word[i][j];
                break;
            }
        }
    }
    cout<<endl;

    }
    return 0;
}
