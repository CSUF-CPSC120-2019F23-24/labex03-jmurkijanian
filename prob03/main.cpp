// This program calculates a person's height in feet (') and inches (").
#include <iostream>
 int main()
 {
int feet, inches, feetinches;


//finds inches of person
std::cout << "How many inches tall is this person?\n";
std::cin >> inches;

//calculates feet
feet = inches / 12;

feetinches = inches % 12;

std::cout << "this person is " <<feet<< "\'" <<feetinches<< "\"";


return 0;

}
