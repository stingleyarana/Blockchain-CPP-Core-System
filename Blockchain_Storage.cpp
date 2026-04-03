#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void save_block(string data) {
    ofstream f("blockchain.dat", ios::app);
    f << data << endl;
    f.close();
}

int main() {
    save_block("BLOCK_HEIGHT_100_HASH_ABC");
    cout << "Block saved." << endl;
    return 0;
}
