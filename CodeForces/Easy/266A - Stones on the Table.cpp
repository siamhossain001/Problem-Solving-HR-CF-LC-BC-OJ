#include<iostream>
#include<vector>  

using namespace std;

int main(){
    
    int x, count = 0;
    cin >> x;

    vector<char> table(x);
    
    for(int i = 0; i < x; i++){
        cin >> table[i];
    }

    for(int i = 0; i < x - 1; i++){
        if(table[i] == table[i+1]){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}