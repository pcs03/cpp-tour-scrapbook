#include <cstddef>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int square(double x) { return x * x; }

// function overloading
void print(int num) { std::cout << num << "\n"; };
void print(unsigned long num) { std::cout << num << "\n"; };
void print(double num) { std::cout << num << "\n"; };
void print(char num) { std::cout << num << "\n"; };

double sum(const std::vector<double> &numbers) {
    return std::reduce(numbers.begin(), numbers.end());
}

int count_x(const char* p, char x) {
    if (p == nullptr) {
        return 0;
    }

    int count = 0;
    for (; *p!=0; ++p) {
        ++count;
    }

    return count;
}

int main() {
    const std::string str = "I promise not to change this";
    constexpr std::string_view strv = "I am evaluated at compile time";

    double num = 3.5;

    std::cout << "Hello, World! Number is '" << square(num) << "'" << std::endl;
    print(num);

    print(sizeof(char));
    print(sizeof(bool));
    print(sizeof(int));
    print(sizeof(double));

    char *pd = nullptr;

    int res = count_x(pd, 'x');

    print(res);


}
