const int MAX_V = ;
const int MAX E = ;

struct edge {
  int from, to, cost;
};

edge es[MAX_E];
int d[MAX_V];
int V, E; // 頂点数、辺数

void bellman_ford(int s) {
  for(int i = 0; i < V; i++) d[i] = INF;
  d[s] = 0;

  while(true) {
    bool update = false;
    for(int i = 0; i < E; i++) {
      edge e = es[i];
      if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;
        update = true;
      }
    }
    if(!update) break;
  }
}
