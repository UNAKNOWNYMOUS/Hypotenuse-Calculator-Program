#include <iostream>
#include <cmath>

int main() {

    double a, b, c;

    std::cout << "Enter A: " << '\n';
    std::cin >> a;

    std::cout << "Enter B; " << '\n';
    std::cin >> b;
    
    c = sqrt( pow(a, 2) + pow(b, 2) );
    std::cout << "C is: " << c << '\n';

    return 0;

}
