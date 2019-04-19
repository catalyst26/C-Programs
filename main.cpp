//
//  main.cpp
//  squareRoot
//
//  Created by Gregory Francois on 4/18/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>
#include <cmath>

double squareRoot(double& r)
{
    double sqRt;
    sqRt = sqrt(r);
    return sqRt;
};

int main()
{
    // Given a real number n, find the square root of n. For example, given n = 9, return 3.
    using std::cout;
    using std::cin;
    
    double num;
    cout << "Enter a number: \n";
    cin >> num;
    
    cout << squareRoot(num) << "\n";
    
    return 0;
}
