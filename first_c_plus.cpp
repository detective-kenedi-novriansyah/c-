#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
#include <unistd.h>
#include <stdio.h>
#include <curses.h> 

void Logo() {
  std::cout << "" << std::endl;
  for(int i = 0; i < 20; i++) {
    std::cout << "#";
  }
  std::cout << "" << std::endl;
  std::cout << "WELCOME TO <KND-NEWBIE/>" << std::endl;
  for(int i = 0; i < 20; i++) {
    std::cout << "#";
  }
  std::cout << "" << std::endl;
  std::cout << "" << std::endl;
}

int main(){
  Logo();
  int a = 177, b = 219;
  for (int i = 0; i < 26; i++) { 
        printf("%c", b); 
        usleep(5000);
  }
    return 0;
}
