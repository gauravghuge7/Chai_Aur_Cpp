#include <iostream>

using namespace std;


int main() {
   
   // cout<< "Welcome to CPP World For New Start ";


   int a = 20;
   int b = 25;

   for(int i=a; i<= a*b; i++) {

      if(i%a==0 && i%b==0) {

         // cout<<i;  // print the i

         printf("%d", i);


         break;

      }
   }


   return 10;


}


// check a number perfect square number or not 

// check a number perfect cube number or not 