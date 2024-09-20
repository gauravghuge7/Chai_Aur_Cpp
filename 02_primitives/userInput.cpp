
#include <iostream>
#include <string>

using namespace std;

int main() {

   string userTea;

   cout << "What would you like to order yourself ";

   // cin >> userTea;

   getline(cin, userTea);

   /// ask user to for quantity of tea
   cout << "How many cups of" <<userTea  << "would you like to order? ";
   int quantity;
   cin >> quantity;

   cout << userTea << " " << quantity << endl;

   return 0;

}


/**
 * @brief 
 *   how to run the cpp file
 *   go to path  
 *    ./fileName.exe
 * 
 * 
 */