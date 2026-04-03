#include <iostream>
#include <string>
#include <functional>

using namespace std;

int transfer(int balance, int amount) {
    if(balance >= amount) return balance - amount;
    return -1;
}

int main() {
    int bal = 100;
    int res = transfer(bal, 30);
    cout << "Contract Result: " << res << endl;
    return 0;
}
