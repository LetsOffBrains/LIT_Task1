#include <iostream>

int main()
{
    unsigned int n = 30;

    std::cout << "Count up to: " << std::endl;
    std::cin >> n;

    unsigned long f = 1;
    for (unsigned i = 2; i <= n; f *= i++) {
        if ((f + 1) % i != 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
}
