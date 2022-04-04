#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>
using namespace std;

int main() {
  int comp = 0;
  int rounds = 0;
  int playerAnswerNum = 0;
  string playerAns = "";
  int compWin = 0;
  int playerWin = 0;
  comp = rand()%3 + 1;

  while(rounds < 5 && playerWin < 3 && compWin < 3){
    playerAnswerNum= 0;
    comp = rand()%3 + 1;
  cout << "\n\n[Choose]\n Rock\n Paper\n Scissors\n";
  cin >> playerAns;
  transform(playerAns.begin( ), playerAns.end( ), playerAns.begin( ),::toupper);

  if (playerAns == "ROCK"){playerAnswerNum= 1;}
  else if (playerAns == "PAPER"){playerAnswerNum= 2;}
  else if (playerAns == "SCISSORS"){playerAnswerNum= 3;}
  else{cout << "Invalid Answer.";}

  if(playerAnswerNum== 1 && comp == 2){
  cout << "The computer chose paper. Computer wins.";
  compWin = compWin + 1;
  rounds = rounds + 1;}

  else if(playerAnswerNum== 2 && comp == 3){
  cout << "The computer chose paper. Computer wins.";
  compWin = compWin + 1;
  rounds = rounds + 1;}

  else if(playerAnswerNum== 3 && comp == 1){
  cout << "The computer chose scissors. Computer wins.";
  compWin = compWin + 1;
  rounds = rounds + 1;}

  else if(comp == 1 && playerAnswerNum== 2){
  cout << "The computer chose rock. Computer wins.";
  playerWin = playerWin + 1;
  rounds = rounds + 1;}

  else if(comp == 2 && playerAnswerNum== 3){
  cout << "The computer chose paper. Computer wins.";
  playerWin = playerWin + 1;
  rounds = rounds + 1;}

  else if(comp == 3 && playerAnswerNum== 1){
  cout << "The computer chose scissors. Computer wins.";
  playerWin = playerWin + 1;
  rounds = rounds + 1;}

  else if(playerAnswerNum== comp){
  cout << "Tie.";
  rounds = rounds + 1;}

  }
  if(playerWin > compWin){
    cout << "\n|You win!|";
  }
  if(playerWin < compWin){
    cout << "\n|You lose.|";
  }
 }
