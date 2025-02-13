#include <iostream>
using namespace std;

int main() {
    cout << "Enter number: ";
    int x;
    cin >> x; // `cout` flushes automatically before taking input
    cout << "You entered: " << x << "\n";
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // No flushing, faster input/output

    cout << "Enter number: ";
    int x;
    cin >> x; // No guarantee that `cout` is flushed before taking input
    cout << "You entered: " << x << "\n";
    return 0;
}
