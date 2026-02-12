#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
class Graph{
    int V;
    list<int>* l;
public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    bool iscycleBFS(int src, vector<bool>& vis){
        queue<pair<int, int>> q;
        q.push({src, -1});
        vis[src] = true;

        while(q.size() > 0){
            int u = q.front().first;
            int parU = q.front().second;
            q.pop();
            list<int> neighbours = l[u];
            for(int v  : neighbours){
                if(!vis[v]){
                    vis[v] = true;
                    q.push({v, u});
                }else if(v != parU){
                    return true;
                }
            }
        }
        return false;
    }
    bool iscycle(){
        vector<bool> vis(V, false);
        for(int i =0; i< V; i++){
            if( !vis[i]){
                if(iscycleBFS(i,vis)){
                    cout<< "Cycle present"<< endl;
                    return true;
                }
            }
        }
        cout<< "No Cycle Present"<<endl;
        return false;
    }


};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,0); 
    g.addEdge(0,3); 
    g.addEdge(3,4);
    g.iscycle();
    return 0;
}