#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
  string str;
  cout << " Masukkan String : ";
  cin >> str;

  map<char, char> hurufKapital;
  for (char c = 'A'; c <= 'Z'; c++)
  {
    hurufKapital[c] = c + 32;
  }

  for (int i = 0; i < str.length(); i++)
  {
    str[i] = hurufKapital[str[i]];
  }

  cout << "Notasi String Setelah Diperbaharui : " << str << endl;

  return 0;
}