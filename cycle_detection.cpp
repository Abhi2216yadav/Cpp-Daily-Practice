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

    bool iscylceUndireDFS(int scr, int par, vector<bool>& vis){
        vis[scr] = true;
        list<int> neigh = l[scr];
        for(int v : neigh){
            if(!vis[v]){
                if(iscylceUndireDFS(v,scr, vis)){
                    return true;
                }
            }else if(v != par){
                return true;
            }
        }
        return false;
    }
    bool iscycle(){
        vector<bool> vis(V, false);
        for(int i =0; i< V; i++){
            if(!vis[i]){
                if(iscylceUndireDFS(i, -1, vis)){
                    return true;
                }
            }
        }
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
    g.addEdge(4,0);
    
    cout<< "Cycle present or not :" << g.iscycle() <<endl;
    return 0;   
}