#include <iostream>
#define NUMBER1(x) (((x < y) && (x >= 0)) ? "true" : "false")

int main(){
    int y, x;
    std::cout << "num1\n";
    std::cin >> y;
    std::cout << "num2\n";
    std::cin >> x;
    std::cout << NUMBER1(x);
}