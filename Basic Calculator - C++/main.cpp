//
//  main.cpp
//  Basic Calculator - C++
//
//  Created by Niki Namian on 11/20/24.
//

#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    //variable declaration
    float firstNumber;
    float secondNumber;
    
    //input
    cout << "Enter the first number: ";
    cin >> firstNumber;
    
    cout << "Enter the second number: ";
    cin >> secondNumber;
    
    //declaration and initialization
    float sum = firstNumber + secondNumber;
    float sub = firstNumber - secondNumber;
    float prod = firstNumber * secondNumber;
    float quo = firstNumber / secondNumber;
    
    //output result
    cout <<"Sum is: "<<sum<<endl;
    cout<<"Differnece is: "<<sub<<endl;
    cout<<"Product is: "<<prod<<endl;
    cout<<"Quotient is: "<<quo<<endl;
    return 0;
}
