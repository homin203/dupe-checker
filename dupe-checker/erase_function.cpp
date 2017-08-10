#include <iostream>
using namespace std;

int main() {
  string temp, getUserInput;

  cout << "Enter any sentence: ";
  getline(cin, getUserInput);

  for (int i = 0; i < getUserInput.size(); i++) {
    if (getUserInput[i] == '/' && getUserInput[i+1] == '/') {
      getUserInput.erase(getUserInput.begin(), getUserInput.end());
    } 
    else {
      temp += getUserInput[i];
    }
  }

  cout << temp;


  return 0;
}