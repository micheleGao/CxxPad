#include <iostream>
using namespace std;
int recursiveGCD(int x, int y) {
    if (y == 0)
        return x;
    return recursiveGCD(y, x % y);
}
int iterGCD(int x, int y) {
    while (y != 0) {
        int temp = x;
        x = y;
        y = temp % y;
    }
    return x;
}
int iterSumBetween(int x, int y) {
    int sum = 0;
    while (x != y) {
        sum += y;
        --y;
    }
    return sum;
}
int recursiveSumBetween(int x, int y) {
    if (x != y)
        return y + recursiveSumBetween(x, y - 1);
    return 0;
}
int main() {
    cout << "iterative GCD(420, 96) = " << iterGCD(420, 96) << endl;
    cout << "recursive GCD(420, 96) = " << recursiveGCD(420, 96) << endl;
    cout << "iterative GCD(54, 1) = " << iterGCD(54, 1) << endl;
    cout << "recursive GCD(54, 1) = " << recursiveGCD(54, 1) << endl;
    cout << "iterative GCD(54, 1) = " << iterGCD(42, 56) << endl;
    cout << "recursive GCD(54, 1) = " << recursiveGCD(42, 56) << endl;
    cout << "iterative Sum(0, 3) = " << iterSumBetween(0, 3) << endl;
    cout << "recursive Sum(0, 3) = " << recursiveSumBetween(0, 3) << endl;
    cout << "iterative Sum(9, 1000) = " << iterSumBetween(9, 1000) << endl;
    cout << "recursive Sum(9, 1000) = " << recursiveSumBetween(9, 1000) << endl;
    return 0;
}