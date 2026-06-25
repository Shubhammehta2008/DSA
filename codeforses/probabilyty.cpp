#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;

// एक राउंड का सिमुलेशन
bool simulate(int n) {
    vector<int> alive(n);
    for(int i = 0; i < n; ++i) alive[i] = i;

    while (alive.size() > 1) {
        vector<int> next_alive;
        vector<bool> shot(alive.size(), false);
        
        // हर जीवित व्यक्ति किसी और पर निशाना लगाता है
        for (int i = 0; i < alive.size(); ++i) {
            int target;
            do {
                target = rand() % alive.size();
            } while (target == i); // खुद को नहीं मार सकते
            shot[target] = true;
        }

        // जो नहीं मरे, वे अगले राउंड में जाएंगे
        for (int i = 0; i < alive.size(); ++i) {
            if (!shot[i]) {
                next_alive.push_back(alive[i]);
            }
        }
        
        if (next_alive.empty()) return false; // सब मर गए
        alive = next_alive;
    }
    return alive.size() == 1; // क्या एक बचा?
}

int main() {
    srand(time(0));
    int n = 10; // लोगों की संख्या
    int trials = 100000;
    int survivors = 0;

    for(int i = 0; i < trials; ++i) {
        if(simulate(n)) survivors++;
    }

    cout << n << " लोगों के समूह में 1 के जीवित बचने की संभावना: " 
         << (double)survivors / trials << endl;

    return 0;
}