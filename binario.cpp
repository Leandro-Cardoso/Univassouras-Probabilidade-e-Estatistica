#include <iostream>

int mod(int number, int divider);
void toBinary(int n);

int main() {
    toBinary(17);

    return 0;
}

int mod(int number, int divider) {
    while (number >= divider) {
        number = number - divider;
    }
    return number;
}

void toBinary(int n) {
    int result[32];
    int i = 0;

    while (n > 0) {
        result[i] = mod(n, 2);
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        std::cout << result[j];
    }
}
