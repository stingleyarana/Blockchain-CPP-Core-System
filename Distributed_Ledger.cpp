#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Transaction {
    string tx_id;
    string from;
    string to;
    int value;
};

vector<Transaction> ledger;

void add_tx(string txid, string f, string t, int v) {
    ledger.push_back({txid,f,t,v});
}

void show_ledger() {
    for(auto& tx : ledger)
        cout << tx.tx_id << ": " << tx.from << "->" << tx.to << " " << tx.value << endl;
}

int main() {
    add_tx("TX99","A","B",25);
    show_ledger();
    return 0;
}
