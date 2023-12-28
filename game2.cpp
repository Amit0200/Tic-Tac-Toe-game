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
  int number;
  srand(time(0));

  while(true){
    number = rand() % 9;
    if(spaces[number] == ' '){
      spaces[number] = computer;
      break;
  }
}

bool checkWinner(char *spaces, char player, char computer){

  if((space[0] != ' ') && (space[0] == spaces[1]) && (spaces[1] == spaces[2])){
    space[0] == player ? std::cout << "You Win!!!" << std::endl : std::cout << "You Lose!" << std::endl;
  }
  else if((space[3] != ' ') && (space[3] == spaces[4]) && (spaces[4] == spaces[5])){
    space[3] == player ? std::cout << "You Win!!!" << std::endl : std::cout << "You Lose!" << std::endl;
  }
  else if((space[6] != ' ') && (space[6] == spaces[7]) && (spaces[7] == spaces[8])){
    space[6] == player ? std::cout << "You Win!!!" << std::endl : std::cout << "You Lose!" << std::endl;
  }
  else if((space[0] != ' ') && (space[0] == spaces[3]) && (spaces[3] == spaces[6])){
    space[0] == player ? std::cout << "You Win!!!" << std::endl : std::cout << "You Lose!" << std::endl;
  }
  else if((space[1] != ' ') && (space[1] == spaces[4]) && (spaces[4] == spaces[7])){
    space[1] == player ? std::cout << "You Win!!!" << std::endl : std::cout << "You Lose!" << std::endl;
  }
  else if((space[2] != ' ') && (space[2] == spaces[5]) && (spaces[5] == spaces[8])){
    space[2] == player ? std::cout << "You Win!!!" << std::endl : std::cout << "You Lose!" << std::endl;
  }
  else if((space[0] != ' ') && (space[0] == spaces[4]) && (spaces[4] == spaces[8])){
    space[0] == player ? std::cout << "You Win!!!" << std::endl : std::cout << "You Lose!" << std::endl;
  }
  else if((space[2] != ' ') && (space[2] == spaces[4]) && (spaces[4] == spaces[6])){
    space[2] == player ? std::cout << "You Win!!!" << std::endl : std::cout << "You Lose!" << std::endl;
  }
  else{
    return false;
  }

  return true;
}

bool checkTie(char *spaces){

  for (int i = 0; i < 9; i++){
    if(spaces[i] == ' '){
      return false;
    }
  }
  std::cout << " It's a tie !! " << std::endl;
  return true;
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
    if(checkWinner(spaces, player, computer)){
      running = false;
      break;
    }
    else if(checkTie(spaces)){
      running = false;
      break;
    }
    
    computerMove(spaces, computer);
    drawBoard(spaces);
    if(checkWinner(spaces, player, computer)){
      running = false;
      break;
    }
    else if(checkTie(spaces)){
      running = false;
      break;
    }
  }
  std::cout << "Thanks for playing the game!" << std::endl;

  return 0;
}
