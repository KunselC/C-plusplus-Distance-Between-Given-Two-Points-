// Kunsel_Chodak_Assignment_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
using namespace std;
//Find the distance between (0,0) and (1,2)
int main()
{
    //Defining x and y values of points
     double x1 = 2;
     double y1 = 3;
     double x2 = 8;
     double y2 = -5;
    
    //Doing the math
    double diffXValuesSquared = pow((x1 - x2), 2.0);
    double diffYValuesSquared = pow((y1 - y2), 2.0);
    double distance = sqrt(diffXValuesSquared + diffYValuesSquared);
    
    //Printing out the result
    cout << distance;
    

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
