#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <utility>

using namespace std;

long long countZeroVisits(int n, int x, long long k, const string& s) {
    long long count = 0;
    int pos = x;
    long long time = 0;
    unordered_map<int, pair<long long, long long>> stateMap; // {position: {time, count}}

    while (time < k) {
        if (pos == 0) {
            count++;
            if (stateMap.find(pos) != stateMap.end()) {
                // We have encountered this state before, so we can calculate the number of cycles
                long long prevTime = stateMap[pos].first;
                long long prevCount = stateMap[pos].second;
                long long cycleTime = time - prevTime;
                long long cycleCount = count - prevCount;
                long long remainingTime = k - time;
                long long cycles = remainingTime / cycleTime;
                count += cycles * cycleCount;
                time += cycles * cycleTime;
                if (time >= k) break;
            } else {
                stateMap[pos] = {time, count};
            }
            pos = x; // Reset position
        }
        if (time >= k) break;
        char cmd = s[time % n];
        if (cmd == 'L') {
            pos--;
        } else {
            pos++;
        }
        time++;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        long long k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        cout << countZeroVisits(n, x, k, s) << '\n';
    }

    return 0;
}