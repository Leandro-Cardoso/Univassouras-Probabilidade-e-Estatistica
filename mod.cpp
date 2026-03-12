#include <iostream>

int mod(int a, int b);

int main() {
    std::cout << "\nO resto de 17 / 2 e " << mod(17, 2);
    std::cout << "\nO resto de 16 / 2 e " << mod(16, 2) << "\n\n";
    return 0;
}

int mod(int a, int b) {
    while (a >= b) {
        a = a - b;
    }
    return a;
}
