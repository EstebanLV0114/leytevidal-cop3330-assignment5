#include <iostream>
#include <string>
#include "leytevidal-cop3330-ch3-ex8.h"

using namespace std;

//specifically gets 32bit value
constexpr bool isOdd(uint32_t input) 
{
    return (input &1);
}

int main()
{
    //initalize num at 0 since no value inputed, then simple if else statement for odd or even
    //can also return with invalid input if not entered correct
    int num = 0;
    cout << "Enter an integer: ";
    if (cin >> num)
    {
        //check if odd or even
        cout << "The value " << num << " " << "is " << (isOdd(num) ? "odd" : "even");
    }
    else
    cout << "The value is invalid";

  return 0;
}