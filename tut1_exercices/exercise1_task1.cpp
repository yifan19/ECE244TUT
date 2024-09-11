#include <iostream>


int main() {
    int N = 5;
    std::cout << "Enter the dimension of the square" << std::endl;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        for (int i = 0; i < N; i++) {
            std::cout << '#';
        }
        std::cout << std::endl;
    }
    
}