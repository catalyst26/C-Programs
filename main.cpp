//
//  main.cpp
//  euclidAlgo
//
//  Created by Gregory Francois on 8/8/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>

int euclidAlgo(int m, int n)
{
    int r;  // remainder variable
    while (n != 0)
    {
        r = m % n;  // assign remainder of division to r variable
        m = n;      // n becomes new dividend
        n = r;      // assign remainder to n
    }
    return m;
};

int main() {
    using std::cout;
    
    int one = 31415;
    int two = 14142;
    
    cout << "GCD of " << one << " and " << two << " is " << euclidAlgo(one,two) << "\n";
    
    return 0;
}
