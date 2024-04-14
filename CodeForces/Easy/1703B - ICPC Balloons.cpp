#include <iostream>
#include <vector>
#include <cmath>
#include<set>
#include<map>
#include<algorithm>

typedef long long ll;

using namespace std;
int main() {
    int test;
    int N;

    cin>>test;
    while(test--){
    cin>>N;
    vector<bool> alphabet(26,false);
    char input[N];
    
    cin>>input;
    
    int counter=0;
    for(int i=0;i<N;i++){
        if(alphabet[input[i]-'A']==false){
            counter+=2;
            alphabet[input[i]-'A']=true;
        }
        else {
            counter++;
        }
    }
      cout<<counter<<endl;
    }

    return 0;
}