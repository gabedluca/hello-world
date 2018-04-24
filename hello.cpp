#include <iostream>
using namespace std

int main()
{
  int count;
  
  cout << "Enter the number of times you'd like to greet the program: ";
  cin >> count;
  cout << endl;
  
  for(x = 0; x < count; x++)
  {
    cout << count << ": What's up!\n";
  }
  
  return 0;
}
