/*
A game of rock, paper, scissors, lizard, spock. Take your chance at the game from The Big Bang Theory, designed by Sam Kass and Karen Bryla.
*/
/*
Rock1: Scissors2, Lizard4
Paper2: Rock1, Spock5
Scissors2: Paper1, Lizard4
Lizard4: Spock5, Paper2
Spock5: Scissors2, Rock1
*/

#include <iostream>
#include <stdlib.h>
#include <string>


class GameOptions {
  public:
    std::string name;
    int number;
};

int main() {
srand(time(NULL));

int computer = rand() % 3 + 1;

int user = 0;

std::cout << "**========================================**\n";
std::cout << "🌎 ⚛️ Rock, Paper, Scissors, Lizard, Spock!⚛️ 🌎\n";
std::cout << "**========================================**\n";

std::cout << "1. 🪨 - Rock\n";
std::cout << "2. 📄 - Paper\n";
std::cout << "3. ✂️✄ - Scissors\n";
std::cout << "4. 🦎 - Lizard\n";
std::cout << "5. 🖖 - Spock\n";
std::cout << "🔫 Shoot : ";
std::cin >> user;

std::string win = "You win! We chose ";
std::string lose = "Sorry, you lost! We chose ";

GameOptions rock;
rock.name = "Rock\n";
rock.number = 1;

GameOptions paper;
paper.name = "Paper\n";
paper.number = 2;

GameOptions scissors;
scissors.name = "Scissors\n";
scissors.number = 3;

GameOptions lizard;
lizard.name = "Lizard\n";
lizard.number = 4;

GameOptions spock;
spock.name = "Spock\n";
spock.number = 5;

// User & Computer Tie
if (user == computer) {
  std::cout << "We tied! Let's try again.\n";
}
// User chooses Rock
if (user == rock.number) {
  if (computer == paper.number) {
    std::cout << lose << rock.name;
  } 
  else if (computer == spock.number) {
    std::cout << lose << spock.name;
  }
  else if (computer == scissors.number) {
    std::cout << win << scissors.name;
  } 
  else if (computer == lizard.number) {
    std::cout << win << lizard.name;
  }
} 
// User chooses Paper
else if (user == paper.number) {
  if (computer == scissors.number) {
    std::cout << lose << scissors.name;
  } 
  else if (computer == lizard.number) {
    std::cout << lose << spock.name;
  }
  else if (computer == rock.number) {
    std::cout << win << rock.name;
  }
  else if (computer == spock.number) {
    std::cout << win << spock.name;
  }
}
// User chooses Scissors
else if (user == scissors.number) {
  if (computer == rock.number) {
    std::cout << lose << rock.name;
  }
  else if (computer == spock.number) {
    std::cout << lose << spock.name;
  }
  else if (computer == paper.number) {
    std::cout << win << paper.name;
  }
  else if (computer == lizard.number) {
    std::cout << win << lizard.name;
  }
}
// User chooses Lizard
else if (user == lizard.number) {
  if (computer == rock.number){
    std::cout << lose << rock.name;
  }
  else if (computer == scissors.number) {
    std::cout << lose << scissors.name;
  }
  else if (computer == spock.number) {
    std::cout << win << spock.name;
  }
  else if (computer == paper.number) {
    std::cout << win << paper.name;
  }
}
// User chooses Spock
else if (user == spock.number) {
  if (computer == paper.number) {
    std::cout << lose << paper.name;
  }
  else if (computer == lizard.number) {
    std::cout << lose << lizard.name;
  }
  else if (computer == scissors.number) {
    std::cout << win << scissors.name;
  }
  else if (computer == rock.number) {
    std::cout << win << rock.name;
  }
}
return 0;
}