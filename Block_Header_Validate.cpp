#include <iostream>
#include <string>

using namespace std;

struct BlockHeader {
    int index;
    string prev_hash;
    string hash;
    long nonce;
};

bool validate_header(BlockHeader h) {
    return h.hash.substr(0,3) == "000" && h.prev_hash != "";
}

int main() {
    BlockHeader h = {1,"PREV","000XYZ",12345};
    cout << "Valid: " << boolalpha << validate_header(h) << endl;
    return 0;
}
