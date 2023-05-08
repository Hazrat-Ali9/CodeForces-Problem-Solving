#include<bits/stdc++.h>
using namespace std;

const int N=1e3+5;
int n,ax,ay,bx,by,cx,cy;
bool vis[N][N];

bool isValid(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= n;
}

int main() {
    cin>>n>>ax>>ay>>bx>>by>>cx>>cy;

    queue<pair<int,int>> q;
    q.push({bx,by});
    vis[bx][by]=true;

    while(!q.empty()) {
        int x=q.front().first, y=q.front().second;
        q.pop();

        if(x==cx && y==cy) {
            cout<<"YES\n";
            return 0;
        }

        for(int i=-1; i<=1; i++) {
            for(int j=-1; j<=1; j++) {
                if(i==0 && j==0) continue;
                int nx=x+i, ny=y+j;
                if(isValid(nx,ny) && !vis[nx][ny] && !(nx==ax || ny==ay || abs(nx-ax)==abs(ny-ay))) {
                    q.push({nx,ny});
                    vis[nx][ny]=true;
                }
            }
        }
    }

    cout<<"NO\n";
    return 0;
}
