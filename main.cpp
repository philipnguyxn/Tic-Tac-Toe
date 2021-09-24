#include <iostream>
#include <vector>
using namespace std;

vector <string> board[10];

void createBoard() {
    for ( int i = 0; i < 10; i++)
    {
        board[i] = " ";
    }
}

void printBoard() {
    cout << "   |   |" << endl;
    cout << " " << board[1] << " | " << board[2] << " | " << board[3] << endl;
    cout << "___|___|___|" << endl;
    cout << "   |   |" << endl;
    cout << " " << board[4] << " | " << board[5] << " | " << board[6] << endl;
    cout << "___|___|___|" << endl;
    cout << "   |   |" << endl;
    cout << " " << board[7] << " | " << board[8] << " | " << board[9] << endl;
    cout << "   |   |" << endl;
}

void insertLetter( int pos, char letter ) {
    board[pos] = letter;      
}

string spaceIsFree( int pos ) {
    return board[pos] = " ";
}

void playerMove() {
    bool run = true;
    while ( run == true )
    {
        string input;
        cout << "Please select a position to place an \'X\' (1-9): ";
        getline( cin, input );
        try
        {
            stringstream ss(input);
            int move; ss >> move;
            throw 400;
            if ( 0 < move < 10 )
            {
                if ( spaceIsFree(move) )
                {
                    insertLetter( move, "X" );
                    run = false;
                }
                else
                {
                    cout << "This postion is already occupied!";
                }
            }
            else
            {
                cout << "Please type a number within the range!";
            }   
        }
        catch( int x )
        {
            cout << "Please type a number!";
        }
    }
}
int main() {
    return 0;
}