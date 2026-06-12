// #include <iostream>     
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
// long long k;
// int element;
// vector<int> a;
// vector<int> b;
// while(cin >>element){
//     a.push_back(element);
// }
// while(cin >>element){
//     b.push_back(element);
// }
// int n = a.size();
// int m = b.size();
// for(long long i=0; i<k; i++) {
//    if(a[i%n]>b[i%m]){
//      swap(a[i%n], b[i%m]);
//    }
// }
// int i=0;
// while(i<a.size()){
//     cout<<a[i]<<" ";
//     i++;}
//     cout<<endl;
//     int j=0;
//     while(j<b.size()){
//         cout<<b[j]<<" ";
//         j++;
//     }
//     return 0;
// }
#include <iostream>     
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    long long k; // k की वैल्यू बहुत बड़ी हो सकती है!
    cin >> n >> m >> k;

    // एरे a को पढ़ना
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // एरे b को पढ़ना
    vector<int> b(m);
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // आपका सिमुलेशन लॉजिक
    for(long long i = 0; i < k; i++) {
        if(a[i % n] > b[i % m]) {
             swap(a[i % n], b[i % m]);
        }
    }

    // एरे a को प्रिंट करना
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    
    // एरे b को प्रिंट करना
    for(int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";
}

int main() {
    // इनपुट/आउटपुट ऑपरेशन्स को ऑप्टिमाइज़ करना
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // टेस्ट केस की संख्या पढ़ना
    while(t--) {
        solve();
    }
    return 0;
}