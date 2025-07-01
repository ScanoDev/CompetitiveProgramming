#include <vector>
#include <limits>
using namespace std;

const int INF = numeric_limits<int>::max();

void floyd_warshall(int n, vector<vector<int>>& dist) {
    for (int k = 1; k <= n; ++k)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                if (dist[i][k] < INF && dist[k][j] < INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}
