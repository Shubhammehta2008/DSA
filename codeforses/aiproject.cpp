// 
#include <iostream>
using namespace std;

void solve() {
    // बड़े इनपुट के लिए long long का इस्तेमाल करना सुरक्षित रहता है
    long long n, x, y, z;
    cin >> n >> x >> y >> z;

    // 1. बिना AI के समय (Without AI)
    // फॉर्मूला: ceil(n / (x + y))
    long long time_without_ai = (n + (x + y) - 1) / (x + y);

    // 2. AI के साथ समय (With AI)
    long long lines_by_maxim_during_setup = z * x;
    long long time_with_ai = 0;

    if (lines_by_maxim_during_setup >= n) {
        // अगर AI सेट होने के समय (z घंटों) के दौरान ही मैक्सिम अकेले प्रोजेक्ट खत्म कर दे
        time_with_ai = (n + x - 1) / x; 
    } else {
        // AI सेट होने के बाद बची हुई लाइन्स
        long long remaining_lines = n - lines_by_maxim_during_setup;
        long long speed_after_setup = x + 10 * y;
        
        // बची हुई लाइन्स को लिखने में लगने वाला समय
        long long remaining_time = (remaining_lines + speed_after_setup - 1) / speed_after_setup;
        
        // कुल समय = AI सेट करने का समय + बचा हुआ समय
        time_with_ai = z + remaining_time;
    }

    // दोनों में से जो कम समय हो, उसे प्रिंट करें
    cout << min(time_without_ai, time_with_ai) << "\n";
}

int main() {
    // फास्ट I/O (Codeforces में टाइम लिमिट एरर से बचने के लिए)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // टेस्ट केसेस रीड करें
    while (t--) {
        solve();
    }
    return 0;
}