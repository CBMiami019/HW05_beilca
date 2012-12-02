#include <vector>
#include "MatrixGraph.h"

using namespace std;

//Constructor Here
MatrixGraph::MatrixGraph(unsigned num_nodes){
	num_edges = 0;
	M.resize(num_nodes, std::vector<EdgeWeight>(num_nodes, 0.0));
}

//Deconstructor Here
MatrixGraph::~MatrixGraph(){
}

//Modifier Here
 /*
   * Add a *weighted*, *undirected* edge between nodes u and v.
   * 
   * Preconditions: 
   *     u and v are legal labels (i.e. 0 <= u < G.size(), 0 <= v < G.size())
   *     u != v
   *     There is no edge between u and v.
   *     weight > 0
   */
void MatrixGraph::addEdge(NodeID u, NodeID v, EdgeWeight weight){
	//Check that all the preconditions were met
	if(0 <= u < M.size() && 0 <= v < M.size() && u !=v && weight > 0){
		M[u][v] = weight;
		M[v][u] = weight;
	}
}

//Inspector here
 /*
   * Get the weight between nodes u and v; return 0 if there is no edge.
   *
   * Preconditions: 
   *     u and v are legal labels (i.e. 0 <= u < G.size(), 0 <= v < G.size())
   */
EdgeWeight MatrixGraph::weight(NodeID u, NodeID v) const{
	//Check that the preconditions are met, and return 0 if one is not met
	if(u < 0.0 || v < 0.0 || u > M.size() || v > M.size())
		return 0.0;
	else
		//If the preconditions are met, then returnt he weight of that edge
		return M[u][v];
}


//Inspector here
 /*
   * Return a list of NodeID/EdgeWeight pairs describing the nodes adjacent to edge w.
   *
   * Preconditions: u is a legal label.
   */
std::list<NWPair> MatrixGraph::getAdj(NodeID u) const{
	std::list<NWPair> Pairs;
	
}

/*
   * Return the degree (i.e. the number of neighbors) of node u.
   *
   * Preconditions: u is a legal label;
   */
unsigned MatrixGraph::degree(NodeID u) const{
	
}

//Inspector here
/*
   * Return the number of nodes in the graph.
   */
unsigned MatrixGraph::size() const{
	return M.size();
}

//Inspector here
  /* 
   * Return the number of edges in the graph.
   */
unsigned MatrixGraph::numEdges() const{
	return num_edges;
}