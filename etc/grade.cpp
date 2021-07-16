#include <iostream>
using namespace std;

int main()
{
  int score {};
  cout << "Enter a score: ";
  cin >> score;
  if (score >= 90){
	  cout << "A" << endl;
  } else if (score >= 85){
	  cout << "B" << endl;
  } else if (score >= 75){
	  cout << "C" << endl;
  } else if (score >= 65){
	  cout << "D" << endl;
  } else {
	  cout << "You are bad" << endl;
  }


  return 0;
}
