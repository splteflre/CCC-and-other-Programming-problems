#include <iostream>
#include <vector>

using namespace std;

#define INF 100000

int v,e,m,n;
float d,s;
bool visited[1001];
int dist[1001];
vector<int> path[1001];

struct a{
    float speed,dist,time;
} road[1001][1001];

int main()
{
    for(int i=0; i<1001; i++) {
        visited[i] = 0;
        dist[i] = INF;
        for(int j=0; j<1001; j++)
            road[i][j].time = INF;
    }

    cin >> v >> e;

    for(int i=0; i<e; i++) {
        cin >> m >> n >> d >> s;
        road[m][n].dist = road[n][m].dist = d;
        road[m][n].speed = road[n][m].speed = s;
        road[m][n].time = road[n][m].time = d/s*60;
    }

    // Dijkstra's algorithm
    int next = 1;
	dist[1] = 0;
	path[1].push_back(1);
	for(int i=0; i<v; i++) {
		int shortest=INF;
        int cur = next;

		visited[cur] = true;

		for(int j=1; j<=e; j++) {
			if(road[cur][j].time+dist[cur] < dist[j] && !visited[j]) {

				// Update distance
				dist[j] = road[cur][j].time+dist[cur];
				// Update path
				path[j] = path[cur];
				path[j].push_back(j);
			}
			// Update next node to choose
			if(dist[j]<shortest && !visited[j]) {
				shortest = dist[j];
				next = j;
			}
		}
	}

    float delay=0;
    int balloon=path[v].size()-1;
    for(int i=0; i<balloon; i++) {
        delay += road[path[v][i]][path[v][i+1]].dist/(road[path[v][i]][path[v][i+1]].speed*0.75)*60;
    }

    cout << balloon << endl << (int)(delay-dist[v]) << endl;

    return 0;
}
