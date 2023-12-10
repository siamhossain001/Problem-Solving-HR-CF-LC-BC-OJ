#include <iostream>
using namespace std;

int main() {
    string input;
    string substring;

    int a, b, count, test = 1;

    while (cin>>input>>substring) {
         // Step 1
         //clear all garbage value from integer
         a = 0;
         b = 0;
         count = 0;

         cout << "Caso #" << test << ":" << endl;

         // Step 2
         for (int i = 0; i < substring.size(); i++) {
                int j;
             for(j = 0; j<input.size() && i+j < substring.size(); j++)
                      if(input[j] != substring[i+j])break;
                                if(j == input.size())
                                   count++, b = i+1;
           }

        if (count == 0) {
            cout << "Nao existe subsequencia" << endl;
            cout<<endl;
        } 
        
        else {
            cout << "Qtd.Subsequencias: " << count << endl;
            cout << "Pos: " << b << endl;
            cout << endl;
        }
        
        test++;
       
        input.clear();
        substring.clear();
    }

    return 0;
}
