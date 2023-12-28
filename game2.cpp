#include <iostream>
#include <ctime>

void NewBoard(char *spaces){
  std::cout << std::endl;
  std::cout << "     |     |     " << std::endl;
  std::cout << "  " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " | " << std::endl;
  std::cout << "_____|_____|_____" << std::endl;
  
}
void playerMove(char *spaces, char player){
  
}
void computerMove(char *spaces, char computer){
  
}
bool checkWinner(char *spaces, char player, char computer){
  
}
bool checkTie(char *spaces){
  
}

int main(){

  char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  char player = 'X';
  char computer = 'O';
  bool running = true;

  NewBoard(spaces);

  return 0;
}
