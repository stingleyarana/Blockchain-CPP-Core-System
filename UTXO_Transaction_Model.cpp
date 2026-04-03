#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct UTXO {
    string txid;
    int index;
    int amount;
    string owner;
};

vector<UTXO> create_utxo_set() {
    return {{"tx001",0,100,"addr1"},{"tx002",1,50,"addr2"}};
}

int get_balance(vector<UTXO> utxos, string owner) {
    int sum = 0;
    for(auto& u : utxos)
        if(u.owner == owner) sum += u.amount;
    return sum;
}

int main() {
    auto utxos = create_utxo_set();
    cout << "Balance: " << get_balance(utxos, "addr1") << endl;
    return 0;
}
