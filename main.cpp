//
//  main.cpp
//  fibonacci
//
//  Created by Gregory Francois on 4/18/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>

int main()
{
    // The Fibonacci sequence is a series where the next term is the sum of pervious two terms. The first two terms of the Fibonacci sequence is 0 followed by 1.
    // The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21
    using std::cout;
    using std::cin;
    // declare variables to hold series number and first two and next terms
    int n, firstNum = 0, secondNum = 1, nthNum = 0;
    cout << "Enter the number of terms for the Fibonacci sequence: ";
    cin >> n;
    // printing out the terms
    cout << "The first " << n << " numbers of the Fibonacci Series is: ";
    for (int i = 0; i < n; i++)
    {
        // will always print the first trwo terms as 0 and 1
        if (i <= 1)
            nthNum = i;
        else
        {
            // after printing out 0 and 1, next iteration will make i = 2
            // thus the next number printed will be sum of previous two
            nthNum = firstNum + secondNum;
            // moves secondNum to firstNum
            firstNum = secondNum;
            // moves nthNum to secondNum in sequence
            secondNum = nthNum;
        }
        cout << nthNum << " ";
    }
    
    cout << "\n";
    
    
    return 0;
}
