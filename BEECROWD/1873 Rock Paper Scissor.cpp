#include <iostream>
#include<map>

using namespace std;

int main() {
 
    map<string,string> key1;
    map<string,string> key2;
    key1["tesoura"] = "papel";        //Scissors cuts paper
    key1["papel"]   = "pedra";        //Paper covers rock
    key1["pedra"]   = "lagarto";      //Rock tips lizard
    key1["lagarto"] = "spock";        //Lizard Spock falls asleep
    key1["spock"]   = "tesoura";      //Spock melts scissors
   
    key2["tesoura"] = "lagarto";      //Scissors holds lizard
    key2["lagarto"] = "papel";        //lizard eats paper
    key2["papel"]   = "spock";        //Paper disproves spock
    key2["spock"]   = "pedra";        // Spock vaporizes rock
    key2["pedra"]   = "tesoura";      // Rock crushes scissors
    
    string Rajesh,Sheldon;
    int test;
    cin>>test;
    
    while(test--){
        cin>>Rajesh>>Sheldon;
        if((key1[Rajesh]==Sheldon) || (key2[Rajesh]==Sheldon)){
              cout<<"rajesh"<<endl;
        }
        else if((key1[Sheldon]==Rajesh) || (key2[Sheldon]==Rajesh)){
            cout<<"sheldon"<<endl;
        }
        else {
            cout<<"empate"<<endl;
        }
    }
    return 0;
}