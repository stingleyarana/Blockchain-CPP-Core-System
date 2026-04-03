#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Node {
    string id;
    int stake;
};

string select_validator(vector<Node> nodes) {
    int max_stake = 0;
    string selected;
    for(auto& n : nodes) {
        if(n.stake > max_stake) {
            max_stake = n.stake;
            selected = n.id;
        }
    }
    return selected;
}

int main() {
    vector<Node> nodes = {{"NodeA", 100}, {"NodeB", 300}, {"NodeC", 200}};
    cout << "Validator: " << select_validator(nodes) << endl;
    return 0;
}
