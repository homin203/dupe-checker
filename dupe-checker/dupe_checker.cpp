// ** Do not open multiple files at the same time
//  1. make a function to open and read a file [x]
// ** Consider readability
//  1. use more readable way instead of using ascii value [x]
//  2. replace variable names to understandable names [x]
// ** Use iterator instead of for loop in remove_functions in maintenance stage []
//  1. READ and STUDY Text Parsing pdf file in Module2
// ** when use loop for string, use unsigned int [x]
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string removeSpaces(const string);
string removeSingleComments(string);
string removeBlockComments(string);
string readFile(const string);

vector<string> parseString(string&);

int main() {
  // variables
  string fileName1, fileName2; 
  
  cout << "Enter the first file name: ";
  getline(cin, fileName1);

  // cout << "Enter the second file name: ";
  // getline(cin, fileName2);

  cout << readFile(fileName1) << endl;

  return 0;
}

/**
 * special space remover
 * @param    textsInfile [constant value of string data type value]
 * @return   temp         [storing a string without spaces]
 */
string removeSpaces(const string textsInfile) {
  string textWoSpaces; // declare a string data type variable textWoSpaces
  for (unsigned int i = 0; i < textsInfile.size(); i++) {
    // validation for normal and special character
    // assign each value into the textWoSpaces
    if (textsInfile[i] >= '!' && textsInfile[i] <= '~') 
      textWoSpaces += textsInfile[i]; // textWoSpaces = textWoSpaces + textsInfile[i];
  }
  return textWoSpaces;
}

string removeSingleComments(string textsInfile) {
  string textWoComments;
  for (unsigned int i = 0; i < textsInfile.size(); i++) {
    if (textsInfile[i] == '/' && textsInfile[i+1] == '/') {
      textsInfile.erase(textsInfile.begin(), textsInfile.end() - 1);
    } 
    else {
      textWoComments += textsInfile[i];
    }
  }
  return textWoComments;
}
/** function will be used in readFile function */
string removeBlockComments(string textsInfile) {
  // loop will only be terminated when EOF
  string textRead, tempText;
  bool m_cmt = false;
  int beg_pos, end_pos;



  for (unsigned int i = 0; i < textsInfile.size(); i++) {
    /* if (textsInfile[i] == '/' && textsInfile[i + 1] == '/') {
      textsInfile.erase(textsInfile.begin(), textsInfile.end() - 1);
    }
    else  */ 

    //(***********) if we have flag already on then the next "/*" will be just portion of a line comment
    if (m_cmt == false && textsInfile[i] == '/' && textsInfile[i + 1] == '*') {
      m_cmt = true;
      beg_pos = textsInfile.find("/*");
      // two possible occasions to remove comments: 1) */ is not on the same line
      //                                            2) */ is on the same line 
    }
    else if (m_cmt == true && textsInfile[i] == '*' && textsInfile[i + 1] == '/') {
      m_cmt = false;
      end_pos = textsInfile.find("*/");
      // two possible occasions: 1) */ is on the same line
      //                          2) */ is on different line
    }
    else if (m_cmt == true && ) // occasion when line does not start with /* and flag is already on
  }
  
  return tempText;
}

string readFile(const string fileName) {
  ifstream fin;
  fin.open(fileName);

  string textRead, tempText;

  while (fin.good()) {
    getline(fin, textRead);

    if (textRead == "EOF") break;
    if (textRead.empty()) continue;

    tempText += textRead + "\n";
  }

  fin.close();

  return tempText;
}

vector<string> parseString(string& str) {
  stringstream s(str);
  istream_iterator<string> begin(s), end;
  return vector<string>(begin, end);
}



  // store texts in files statically
    // need validation before store
      // validation: ignore white space[x], and comments
      // `//...` and `/*...*/` --> delete comment first and implement removeSpaces() function


  // compare two diff variable to see if each index has identical character


  // if all the same, true
  // otherwise, false


/*  /* /* /* /* /* /* */

