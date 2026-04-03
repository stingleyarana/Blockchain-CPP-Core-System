#include <iostream>
#include <string>
#include <random>

using namespace std;

string mine_block(string prev_hash, int difficulty) {
    string prefix(difficulty, '0');
    string nonce;
    string hash;
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(100000, 999999);
    
    while(true) {
        nonce = to_string(dis(gen));
        hash = "HASH_" + prev_hash + "_NONCE_" + nonce;
        if(hash.substr(0, difficulty) == prefix) break;
    }
    return hash;
}

int main() {
    cout << "Mined Hash: " << mine_block("LAST_HASH", 4) << endl;
    return 0;
}
