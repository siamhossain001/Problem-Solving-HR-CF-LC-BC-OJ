#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<vector>
#include<set>

using namespace std;

int main() {
    set<char> anton;
    string input;
    getline(cin, input);
    
    for(int i=0;i<input.size();i++){
        if(input[i]>='a' && input[i]<='z'){
            anton.insert(input[i]);
        }
    }
    cout << anton.size();
    return 0;
}
