/* Listing 6.11
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   // without loop expression (third expression missing)
   for (char userSelection = 'm'; (userSelection != 'x'); )
   {
      cout << "Enter two integers: " << endl;
      int num1 = 0, num2 = 0;
      cin >> num1;
      cin >> num2;

      cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

      cout << "Press x to exit(x) or any other key to recalculate" << endl;
      cin >> userSelection;
   }

   cout << "Well, it was fun while it lasted. Goodbye!" << endl;

   return 0;
}
