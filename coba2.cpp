#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> text({"# belajar", "## matematika", "## ipa", "## ips", "# hobi", "## game", "## baca" , "# skill"});
  string temp;
  string numstr;
  int numA = 1;
  int numB = 1;
  for (int i = 0; i < text.size(); i++) {
    temp = text[i];
    if ((text[i][0] == '#') && (text[i][1] == ' ')) {
      temp.erase(0, 1);
      temp = to_string(numA)+"."+temp;
      numA++;
      numB=1;
    } else if ((text[i][0] == '#') && (text[i][1] == '#')) {
      temp.erase(0, 2);
      temp = to_string(numA-1)+to_string(numB)+"."+temp;
      numB++;
    }
    cout << temp <<endl;
  }
}
