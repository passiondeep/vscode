#include <iostream>
#include <algorithm>
using namespace std;


int minStep(int a, int b) {
    int dif = abs(a - b);
    int step = 1;
    while (step <= dif) {
        dif -= step;
        step += 1;
    }
    step += 2 * (dif);
    return step-1;
}


int main() {
    int t;
    std::cin >> t;
    while (t-- > 0) {
        int a, b;
        std::cin >> a >> b;
        std::cout << minStep(a, b) << std::endl;
    }

    return 0;
}