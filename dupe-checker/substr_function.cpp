// string::substr
// string substr (size_t pos = 0, size_t len = npos) const;
#include <iostream>
#include <string>
using namespace std;

int main () {
  string str = "We think /* in generalities, */ but we live in details.";
  string str1, str2, temp;
  int pos1, pos2;

  if (str.find("/*") || str.find("*/")) {
    pos1 = str.find("/*");  pos2 = str.find("*/");
    str1 = str.substr(0, pos1);
    str2 = str.substr(pos2 + 2);
    temp = str1 + str2;
  }
  // when finding starting point("/*") and ending point("*/"),
  // use flag as a on/off switch
  // once a "/*" found, flag is on and keep going until "*/ found"

  cout << temp << endl;
  
  return 0;
}

// string str1 = str.substr (str.begin(), pos1, pos2 - pos1 + 2);