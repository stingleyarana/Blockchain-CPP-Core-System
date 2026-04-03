#include <iostream>
#include <string>

using namespace std;

bool spv_verify(string merkle_root, string proof) {
    return proof.find(merkle_root) != string::npos;
}

int main() {
    bool ok = spv_verify("ROOT123", "PROOF_ROOT123");
    cout << "SPV: " << boolalpha << ok << endl;
    return 0;
}
