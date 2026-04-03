#include <iostream>
#include <string>

using namespace std;

struct KeyPair {
    string private_key;
    string public_key;
    string address;
};

KeyPair generate_wallet() {
    KeyPair k;
    k.private_key = "PRIV_KEY_CPP_RANDOM_2026_003";
    k.public_key = "PUB_KEY_CPP_RANDOM_2026_003";
    k.address = "BLOCK_ADDR_CPP_003XYZ";
    return k;
}

string sign_data(string data, string priv_key) {
    return "SIGNATURE_" + data + "_" + priv_key;
}

int main() {
    auto wallet = generate_wallet();
    string sig = sign_data("tx_100", wallet.private_key);
    cout << "Signature: " << sig << endl;
    return 0;
}
