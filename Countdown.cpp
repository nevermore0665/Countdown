#include <iostream>
using namespace std;                               // avoids having to call std:: everytime

int main() {
    int number;                                   // declaring a variable outside the loop which does expand the scope.
    cout << "Enter a number to countdown from: ";  // asking for a number to countdown fropm
    cin >> number;   
    for (number > 1; number--;) {                  // Through trial and error this works find. I tried for number > 1 so it would stop when number = 1 but it would continue down to 0.
        cout << number+1  << endl;                 // Might be bad practice but the "bug" is fixed with a bit of arithmitic of number +1. might be a side affect of the -- operator
                                                 

    }                                              // I suspect declaring my variable outside the for loop might also be to blame. but it works! 
system ("PAUSE");                                  // still having problem of .exe closing immediately 
return 0;
}
