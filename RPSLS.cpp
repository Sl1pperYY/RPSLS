#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));
  int computer = rand() % 5 + 1;
	int user = 0;
  
  std::cout << "====================\n";
	std::cout << "rock paper scissors lizard spock!\n";
	std::cout << "====================\n";

	std::cout << "1) ✊\n";
	std::cout << "2) ✋\n";
	std::cout << "3) ✌️\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";

	std::cout << "shoot! ";
  std::cin >> user;
  
  switch(user) {
    case 1: if (computer == 1) {
      std::cout << "The Computer chose Rock so you drew\n";
    } else if (computer == 2) {
      std::cout << "The Computer chose paper so you lost\n";
    } else if (computer == 3) {
      std::cout << "The Computer chose scissors so you won\n";      
    } else if (computer == 4) {
      std::cout << "The Computer chose lizard so you won\n";
    } else if (computer == 5) {
      std::cout << "The Computer chose spock so you lost";
    } else {
      std::cout << "Something went wrong\n";
    }
    break;
    case 2: if (computer == 1) {
      std::cout << "The Computer chose Rock so you won\n";
    } else if (computer == 2) {
      std::cout << "The Computer chose paper so you drew\n";
    } else if (computer == 3) {
      std::cout << "The Computer chose scissors so you lost\n";
    } else if (computer == 4) {
      std::cout << "The Computer chose lizard so you lost";
    } else if (computer == 5) {
      std::cout << "The Computer chose spock so you won";
    } else {
      std::cout << "Something went wrong\n";
    }
    break; 
    case 3: if (computer == 1) {
      std::cout << "The Computer chose Rock so you lost\n";
    } else if (computer == 2) {
      std::cout << "The Computer chose paper so you won\n";
    } else if (computer == 3) {
      std::cout << "The Computer chose scissors so you drew\n";
    } else if (computer == 4) {
      std::cout << "The Computer chose lizard so you won";
    } else if (computer == 5) {
      std::cout << "The Computer chose spock so you lost";
    } else {
      std::cout << "Something went wrong\n";
    }
    break; 
    case 4: if (computer == 1) {
      std::cout << "The Computer chose Rock so you lost\n";
    } else if (computer == 2) {
      std::cout << "The Computer chose paper so you won\n";
    } else if (computer == 3) {
      std::cout << "The Computer chose scissors so you lost\n";
    } else if (computer == 4) {
      std::cout << "The Computer chose lizard so you drew";
    } else if (computer == 5) {
      std::cout << "The Computer chose spock so you won";
    } else {
      std::cout << "Something went wrong\n";
    }
    break; 
    case 5: if (computer == 1) {
      std::cout << "The Computer chose Rock so you won\n";
    } else if (computer == 2) {
      std::cout << "The Computer chose paper so you lost\n";
    } else if (computer == 3) {
      std::cout << "The Computer chose scissors so you won\n";
    } else if (computer == 4) {
      std::cout << "The Computer chose lizard so you lost";
    } else if (computer == 5) {
      std::cout << "The Computer chose spock so you drew";
    } else {
      std::cout << "Something went wrong\n";
    }
    break;   
  }
}
