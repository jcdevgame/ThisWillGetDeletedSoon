#include <iostream>
using namespace std;

void destruction();
void displayScreen();

char square[10] = {'O', '1', '3', '4', '5', '6', '7', '8', '9'};

int main(){
  cout << "Welcome To Destruction Simulator";
  return 0;
}


void destruction(){
  int destructionValue = 0;
  cout << "Enter the destruction power!";
  
  cin >> destructionValue;
}

void displayScreen(){
  system("cls");
}
