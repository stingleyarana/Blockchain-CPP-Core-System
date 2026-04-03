#include <iostream>
#include <string>

using namespace std;

string cross_sign(string chain_id, string tx_data, string key) {
    return "CROSS_" + chain_id + "_" + tx_data + "_" + key;
}

int main() {
    string sig = cross_sign("ETH", "TX_CROSS", "PRIV_123");
    cout << "CrossSig: " << sig << endl;
    return 0;
}
