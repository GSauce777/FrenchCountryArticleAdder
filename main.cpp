#include <iostream>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string worldCountry;

int main() {
  cout << "-Welcome to the French Country Article Adder v1.0!\n" << endl;
  
  cout << "-Simply enter in the name of the country, in French, and we'll take care of adding the correct article!\n" << endl;

  cout << "***Case and Spelling Sensitive***\n" << endl;

  cout << "Enter name of country: ";
  cin >> worldCountry;
  cout << "\n";

  if (worldCountry == "Etats-Unis" || worldCountry == "Pays-Bas") {
    cout << "les " + worldCountry << endl;
  } 
  else if (worldCountry == "Belize" || worldCountry == "Cambodge" || worldCountry == "Mexique" || worldCountry == "Mozambique" || worldCountry == "Zaire" || worldCountry == "Zimbabwe") {
    cout << "le " + worldCountry << endl;
  }
  else if (worldCountry[0] == 'A' || worldCountry[0] == 'E' || worldCountry[0] == 'I' || worldCountry[0] == 'O' || worldCountry[0] == 'U') {
    cout << "l'" + worldCountry << endl;
  }
  else if (worldCountry[worldCountry.length() - 1] == 'e') {
    cout << "la " + worldCountry << endl;
  }
  else {
    cout << "le " + worldCountry << endl;
  }

  cout << "\n";
  
  return 0;
}