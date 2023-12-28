#include <iostream>
#include <ctime>

void NewBoard(char *spaces){
  std::cout << std::endl;
  std::cout << "     |     |     " << std::endl;
  std::cout << "  " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " | " << std::endl;
  std::cout << "_____|_____|_____" << std::endl;
  std::cout << "     |     |     " << std::endl;
  std::cout << "  " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << " | " << std::endl;
  std::cout << "_____|_____|_____" << std::endl;
  std::cout << "     |     |     " << std::endl;
  std::cout << "  " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << " | " << std::endl;
  std::cout << "     |     |     " << std::endl;
  std:endl;

}
void playerMove(char *spaces, char player){
  int number;
  do{
    std::cout << "Enter a spot to place a marker from 1 -9: ";
    std::cin >> number;
    number --;
    if(spaces[number] == ' '){
      spaces[number] = player;
      break;
    }
  }while(!number > 0 || !number < 8);
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

  while(running){

    playerMove(spaces, player);
    drawBoard(spaces);
  }

  return 0;
}
