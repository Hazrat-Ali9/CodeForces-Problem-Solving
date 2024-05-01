#include <iostream>
#include <vector>
using namespace std;

int maxBooks(int n, int t, vector<int>& times) {
    int maxBooksRead = 0;
    int totalTime = 0;
    int startIndex = 0;

    for (int endIndex = 0; endIndex < n; ++endIndex) {
        totalTime += times[endIndex];

        while (totalTime > t) {
            totalTime -= times[startIndex];
            startIndex++;
        }

        maxBooksRead = max(maxBooksRead, endIndex - startIndex + 1);
    }

    return maxBooksRead;
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> times(n);

    for (int i = 0; i < n; ++i) {
        cin >> times[i];
    }

    cout << maxBooks(n, t, times) << endl;

    return 0;
}
