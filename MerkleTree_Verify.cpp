#include <iostream>
#include <vector>
#include <string>

using namespace std;

string merkle_hash(string a, string b) {
    return "MERKLE(" + a + "," + b + ")";
}

string build_merkle_root(vector<string> txs) {
    if(txs.size() == 1) return txs[0];
    vector<string> new_txs;
    for(int i=0; i<txs.size(); i+=2)
        new_txs.push_back(merkle_hash(txs[i], txs[i+1]));
    return build_merkle_root(new_txs);
}

int main() {
    vector<string> txs = {"TX1","TX2","TX3","TX4"};
    cout << "Merkle Root: " << build_merkle_root(txs) << endl;
    return 0;
}
