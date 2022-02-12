#include <iostream>
#include <string>
using namespace std;

string** CreateBoard(){
    string ** board = new string*[3];
    for (int i = 0; i < 3; ++i){
      board[i] = new string[3];
      for (int j = 0; j< 3; ++j){
        board[i][j] = "-";
      }
    }

    return board;
}

void DisplayBoard(string **board){
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout << board[i][j];
    }
    cout << endl;


  }


}

int * GetPlayerChoice(){
  int row;
  int col;
  cout << "Enter a row: "<< endl;
  cin >> row;
  cout << "Enter a col: " << endl;
  cin >> col;

  int arr[2];
  arr[0] = row;
  arr[1] = col;

  return arr;


}

string** PlaceMarker(string** board,int row, int col, string marker) {
    board[row][col] = marker;
    return board;

}




int main(){



  string** board = CreateBoard();
  string playerTurn[9] = {"O","X","O","X","O","X","O","X","O"};
  int * loc;

  for(int i = 0; i < 9; i++ ){
    DisplayBoard(board);
    cout << endl;
    cout << "Its your turn "<<playerTurn[i] << endl;
    loc = GetPlayerChoice();
    PlaceMarker(board, loc[0], loc[1], playerTurn[i]);
    cout << endl;
    DisplayBoard(board);
    cout << endl;
  }
  


}
