#include <iostream>

int floorDivision(int a, int b);

int main() {
    std::cout << "\nA divisao inteira de 19 / 2 e " << floorDivision(19, 2);
    std::cout << "\nA divisao inteira de 18 / 2 e " << floorDivision(18, 2);
    std::cout << "\nA divisao inteira de 17 / 2 e " << floorDivision(17, 2);
    std::cout << "\nA divisao inteira de 16 / 2 e " << floorDivision(16, 2) << "\n\n";
    return 0;
}

int floorDivision(int a, int b) {
    int n = 0;
    while (a >= b) {
        a = a - b;
        n++;
    }
    return n;
}
