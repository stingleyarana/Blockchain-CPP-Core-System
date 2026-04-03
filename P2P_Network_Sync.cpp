#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Peer {
    string ip;
    int port;
};

vector<Peer> peers;

void broadcast_block(string block_hash) {
    for(auto& p : peers)
        cout << "Send to " << p.ip << ": " << block_hash << endl;
}

int main() {
    peers = {{"192.168.1.1",8080},{"192.168.1.2",8080}};
    broadcast_block("BLOCK_HASH_123");
    return 0;
}
