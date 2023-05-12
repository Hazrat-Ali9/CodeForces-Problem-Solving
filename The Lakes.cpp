// 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<vector<int>> grid;
vector<vector<bool>> visited;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] > 0 && !visited[x][y]);
}

int dfs(int x, int y) {
    visited[x][y] = true;
    int volume = grid[x][y];

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (isValid(newX, newY)) {
            volume += dfs(newX, newY);
        }
    }

    return volume;
}

int largestLakeVolume() {
    int largestVolume = 0;
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] > 0 && !visited[i][j]) {
                int volume = dfs(i, j);
                largestVolume = max(largestVolume, volume);
            }
        }
    }

    return largestVolume;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin >> n >> m;

        grid.assign(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        int result = largestLakeVolume();
        cout << result << endl;
    }

    return 0;
}
