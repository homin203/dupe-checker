#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string removeSpaces(const string);
string removeComments(string);

int main() {
  // variables
  string temp1, temp2;
  string text1, text2, fileName1, fileName2; 
  ifstream fin1, fin2;
  
  cout << "Enter the first file name: ";
  getline(cin, fileName1);

  cout << "Enter the second file name: ";
  getline(cin, fileName2);

  fin1.open(fileName1);
  fin2.open(fileName2);

  while (fin1.good() && fin2.good()) {
    getline(fin1, text1);
    getline(fin2, text2);

    if ((text1 == "EOF") || (text2 == "EOF")) break;
    if (text1.empty() && text2.empty()) continue;

    temp1 += removeComments(text1);
    temp2 += removeComments(text2);
  }

  cout << temp1 << endl << endl;
  cout << temp2 << endl;

  fin1.close();
  fin2.close();

  return 0;
}

/**
 * special space remover
 * @param    getUserInput [constant value of string data type value]
 * @return   temp         [storing a string without spaces]
 */
string removeSpaces(const string getUserInput) {
  string temp; // declare a string data type variable temp
  for (int i = 0; i < getUserInput.size(); i++) {
    // if a character of a string is lower case or upper case alphabet,
    // assign each value into the temp
    if ((int)getUserInput[i] >= 33 && (int)getUserInput[i] <= 127)
      temp += getUserInput[i]; // temp = temp + getUserInput[i];
  }
  return temp;
}

string removeComments(string getUserInput) {
  string temp;
  for (int i = 0; i < getUserInput.size(); i++) {
    if (getUserInput[i] == '/' && getUserInput[i+1] == '/') {
      getUserInput.erase(getUserInput.begin(), getUserInput.end() - 1);
    } 
    else {
      temp += getUserInput[i];
    }
  }
  return temp;
}




  // store texts in files statically
    // need validation before store
      // validation: ignore white space[x], and comments
      // `//...` and `/*...*/` --> delete comment first and implement removeSpaces() function


  // compare two diff variable to see if each index has identical character


  // if all the same, true
  // otherwise, false


