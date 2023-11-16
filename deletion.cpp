#include <iostream>
using namespace std;

void destruction();
void displayScreen();

char square[10] = {'O', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main(){
  displayScreen();

  return 0;
}


void destruction(){
  int destructionValue = 0;
  cout << "Enter the destruction power!";

  cin >> destructionValue;
}

void displayScreen(){
  system("CLS");

  cout << "--------------------------------\n\n";
  cout << "Welcome to Destruction Simulator \n\n";
  cout << "Your goal is to destroy everything \n\n";
  cout << " |   |   |   |\n";
  cout << " | " << square[1] << " | " << square[2] << " | " << square[3] << " |\n";
  cout << " |___|___|___|\n";
  cout << " |   |   |   |\n";
  cout << " | " << square[4] << " | " << square[5] << " | " << square[6] << " |\n";
  cout << " |___|___|___|\n";
  cout << " |   |   |   |\n";
  cout << " | " << square[7] << " | " << square[8] << " | " << square[9] << " |\n";
  cout << " |   |   |   |\n";
}
