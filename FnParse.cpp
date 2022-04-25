#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string wParse(const string& Word);

int main()
{
  string Word;

  cout << endl << "Enter your Word: ";
  cin >> Word;
  cout << "Your Word after Parsing: " << wParse(Word) << endl << endl;

  system("pause");
  return 0;
}

string wParse(const string& Word)
{
  string NewWord;

  for (int i = 0; i < Word.length(); i++)
  {
    int Count = 0;

    for (int j = 0; j < Word.length(); j++)
    {
      if (tolower(Word[i]) == tolower(Word[j]))
      {
        if (++Count == 2) { break; }
      }
    }

    NewWord += (Count == 1 ? "(" : ")");
  }

  return NewWord;
}
