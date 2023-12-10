#include <iostream>

using namespace std;

void Player1_Won(){
    cout<<"Bazinga!"<<endl;
}
void Player2_Won(){
    cout<<"Raj trapaceou!"<<endl;
}

int main() {
    int test,caso=1;
    string player1,player2;
    string chracters[]={"tesoura","papel","pedra","lagarto","Spock"};
    cin>>test;
    while(test--){
        cin>>player1>>player2;
        cout<<"Caso #"<<caso<<": ";
        //both player same
        if(player1==player2){
            cout<<"De novo!"<<endl;
        } 
        //scissots vs paper
        else if((player1==chracters[0] || player1==chracters[1]) && (player2==chracters[0] || player2==chracters[1])){
            if(player1==chracters[0] || player2==chracters[1] ){
                Player1_Won();
            }
            else{
                Player2_Won();
            }
        }
        //paper vs rock
        else if((player1==chracters[1] || player1==chracters[2]) && (player2==chracters[1] || player2==chracters[2])){
            if(player1==chracters[1] && player2==chracters[2]){
                Player1_Won();
            }
            else{
                Player2_Won();
            }
        }
        //rock vs lizard
        else if((player1==chracters[2] || player1==chracters[3]) && (player2==chracters[2] || player2==chracters[3])){
              if(player1==chracters[2] && player2==chracters[3]){
                Player1_Won();
              }
              else {
                 Player2_Won();
              }
        }
        //lizard vs Spock
        else if((player1==chracters[3] || player1==chracters[4]) && (player2==chracters[3] || player2==chracters[4])){
            if(player1==chracters[3] && player2==chracters[4]){
                Player1_Won();
            } 
            else{
                Player2_Won();
            }
        }
        //Spock vs scissors
        else if((player1==chracters[4] || player1==chracters[0]) && (player2==chracters[4] || player2==chracters[0])){
            if(player1==chracters[4] && player2==chracters[0]){
                Player1_Won();
            }
            else{
               Player2_Won();
            }
        }
        //scissors vs lizard
        else if((player1==chracters[0] || player1==chracters[3]) && (player2==chracters[0] || player2==chracters[3])){
            if(player1==chracters[0] && player2==chracters[3]){
                 Player1_Won();
            }
            else{
                Player2_Won();
            }
        }
        //lizard vs paper
        else if((player1==chracters[1] || player1==chracters[3]) && (player2==chracters[1] || player2==chracters[3])){
            if(player1==chracters[3] && player2==chracters[1]){
                 Player1_Won();
            }
            else{
                Player2_Won();
            }
        }
        //paper vs Spock
        else if((player1==chracters[1] || player1==chracters[4]) && (player2==chracters[1] || player2==chracters[4])){
            if(player1==chracters[1] && player2==chracters[4]){
                 Player1_Won();
            }
            else{
                Player2_Won();
            }
        }
        //Spock vs rock
        else if((player1==chracters[2] || player1==chracters[4]) && (player2==chracters[2] || player2==chracters[4])){
            if(player1==chracters[4] && player2==chracters[2]){
                 Player1_Won();
            }
            else{
                Player2_Won();
            }
        }
        //rock vs scissors
        else if((player1==chracters[0] || player1==chracters[2]) && (player2==chracters[0] || player2==chracters[2])){
            if(player1==chracters[2] && player2==chracters[0]){
                 Player1_Won();
            }
            else{
                Player2_Won();
            }
        }
        caso++;       
    }
    return 0;
}