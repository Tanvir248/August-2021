#include<bits/stdc++.h>
using namespace std;
#define MAX 105
#define INF 100000000
#define A 1
#define B 2
#define C 3
#define D 4
#define E 5
#define F 6
#define G 7
#define H 8
#define I 9
#define J 10
#define K 11
#define L 12
struct Node{
	int val;
	int cost;
};
vector<Node> graph[MAX];
bool visited[MAX];
int dist[MAX];
class compare{
	public:
	bool operator()(Node &a,Node &b ){
		if(a.cost>b.cost) return true;
		
		return false;
	}
};
void reset(){
    for(int i=0; i<MAX; i++){
        graph[i].clear();
        visited[i]=0;
        dist[i]= INF;
    }
}

void dijkstra(int source){
	priority_queue<Node, vector<Node>, compare> PQ;
	PQ.push({source, 0});
	while (!PQ.empty())
	{
		Node current = PQ.top();
		PQ.pop();
	int val = current.val;
	int cost = current.cost;
		if(visited[val]== 1) continue;// if this value is visited

		dist[val]= cost; //this is final cost
		visited[val]=1;
		for(int i=0; i<graph[val].size(); i++){
			int next  =graph[val][i].val;
			int nextcost = graph[val][i].cost;

			if(visited[next]==0)
			PQ.push({next, cost+nextcost});
		}
	}
	
}
int main(){
    reset();
	int nodes, edges;
	cin>>nodes>>edges;
	for(int i=0; i<edges; i++){
		int u, v, w;
		cin>>u>>v>>w;
		graph[u].push_back({v, w});
	}
	cout<<"Enter source node: ";
	int source;
	cin>>source;
	dijkstra(source	);
	for(int i=1; i<=nodes; i++){
		cout<<"Node: "<<i<<" Distance :";
        if(dist[i]== INF) cout<<"inf"<<endl;
        else cout<<dist[i]<<endl;
	}
	return 0;
}
/*12 17
A D 6
A C 6
A B 6
B C 6
B 6 1 
E C 7
C D 2
F G 11
F H 10
8 7 22
D J 18
I J 1
I L 8
I J 16
G J 25
L J 3
G I 2   
Enter source node: 1
Node: 1 Distance :0
Node: 2 Distance :6
Node: 3 Distance :6
Node: 4 Distance :6
Node: 5 Distance :7
Node: 6 Distance :inf
Node: 7 Distance :inf
Node: 8 Distance :inf
Node: 9 Distance :inf
Node: 10 Distance :24
Node: 11 Distance :inf
Node: 12 Distance :inf*/