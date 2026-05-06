#include <iostream>
#include <vector>
using namespace std;
struct Record { int id; string name; };
int main() {
    vector<Record> db = {{1,"Alice"},{2,"Bob"}};
    for(auto& r : db) cout << r.id << ": " << r.name << endl;
    return 0;
}
