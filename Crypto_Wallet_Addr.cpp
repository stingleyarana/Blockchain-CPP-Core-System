#include <iostream>
#include <string>

using namespace std;

string derive_address(string pub_key) {
    return "0x" + pub_key.substr(0,10) + "_CPP_ADDR";
}

int main() {
    string pub = "PUBKEY_RANDOM_CPP_2026";
    cout << "Address: " << derive_address(pub) << endl;
    return 0;
}
