#include <iostream>

using namespace std;

char board[8][8];

void setValidPosition(int i, int j) {
    if (i >= 0 && i < 8 && j >= 0 && j < 8) {
        board[i][j] = 'P';
    }
}

void horsePosition(char horse[2], int &i, int &j) {
    if (horse[0] >= 'a' && horse[1] >= '1' && horse[0] <= 'h' && horse[1] <= '8') {
        i = horse[1] - '1';
        j = horse[0] - 'a';
    } else {
        // Handle invalid input
        i = -1;
        j = -1;
    }
}

int main() {
    char horse[2];
    char pos[2];
    int horseI, horseJ;


    cin >> horse;

    horsePosition(horse, horseI, horseJ);

    if (horseI == -1 || horseJ == -1) {

        return 1;
    }

    board[horseI][horseJ] = 'H';

    // Calculate valid positions for the horse
    setValidPosition(horseI + 2, horseJ - 1);
    setValidPosition(horseI + 2, horseJ + 1);
    setValidPosition(horseI - 2, horseJ - 1);
    setValidPosition(horseI - 2, horseJ + 1);
    setValidPosition(horseI + 1, horseJ - 2);
    setValidPosition(horseI - 1, horseJ - 2);
    setValidPosition(horseI + 1, horseJ + 2);
    setValidPosition(horseI - 1, horseJ + 2);

    
    cin >> pos;

    int posI, posJ;
    horsePosition(pos, posI, posJ);

    if (posI == -1 || posJ == -1) {
        cout << "INVALIDO" << endl;
    } else if (board[posI][posJ] == 'P') {
        cout << "VALIDO" << endl;
    } else {
        cout << "INVALIDO" << endl;
    }

    return 0;
}
