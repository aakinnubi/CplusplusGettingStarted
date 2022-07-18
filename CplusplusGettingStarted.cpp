// CplusplusGettingStarted.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int addNumber(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}
int main()
{
  /*  int firstNumber = 3;*/
    int firstNumber  {4 }; 
    std::cout << "Hello World!\n";
    std::cout << "New Number " <<addNumber(firstNumber,30) << "\n";
    int age;
    float weight;
    double distace;
    bool isAlive;
    char initial;
    string name;
    unsigned short int betterAge;
    long double hugeDistance;

    age = 34;
    weight = 13.4f;
    distace = 1212.987;
    isAlive = true;
    cout << "The variable results : Age => " << age << " Weight is =>" << weight << "Distance => "<<distace << "and isAlive => "<<isAlive;

    //Compound operator

   int g=  age -= 10;
   int g2=  age *= 10;
   float g3 = age /= 10;
   float g5 = age %= 10;
   cout << "\n The variable results : Age => " << g << " Weight is => " << g2 << " Distance => " << g3 << " and isAlive => " << g5;

    //End of compound operator
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
