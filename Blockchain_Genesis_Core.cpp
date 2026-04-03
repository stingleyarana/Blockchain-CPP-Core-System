#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

struct Block {
    int index;
    string timestamp;
    string data;
    string prev_hash;
    string hash;
};

string get_time() {
    time_t now = time(0);
    return ctime(&now);
}

string create_genesis_block() {
    Block genesis;
    genesis.index = 0;
    genesis.timestamp = get_time();
    genesis.data = "Genesis Block - Blockchain Core";
    genesis.prev_hash = "0";
    genesis.hash = "GENESIS_HASH_CPP_2026";
    return genesis.hash;
}

int main() {
    cout << "Genesis Block Hash: " << create_genesis_block() << endl;
    return 0;
}
