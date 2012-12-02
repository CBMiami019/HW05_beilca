#include <vector>
#include "ListGraph.h"

using namespace std;

//Constructor
ListGraph::ListGraph(int numNodes){
	num_edges = 0;
	edgeList.resize(numNodes);
}

//Deconstructor
ListGraph::~ListGraph(){
}

//Modifier
  /*
   * Add a weighted, undirected edge between nodes u and v.
   * 
   * Preconditions: 
   *     u and v are legal labels (i.e. 0 <= u < G.size(), 0 <= v < G.size())
   *     u != v
   *     There is no edge between u and v.
   *     weight > 0
   */
void ListGraph::addEdge(NodeID u, NodeID v, EdgeWeight weight){
	//bool matchExists = false;
	//EList::iterator iterator;
	//Make sure all the preconditions are met
	if(0 <= u < edgeList.size() && 0 <= v < edgeList.size() && u != v && weight > 0){
		//Have to make sure there is no edge between u and v
		//for(iterator = edgeList[u].begin(); iterator != edgeList[u].end(); iterator ++){
			//NWPair check = *iterator;
			//if(check.first() == v){
			//	matchExists = true;
			//}
		//}
	
	//if(!matchExists){
		edgeList[u].push_front(NWPair(v, weight));
		edgeList[v].push_front(NWPair(u, weight));
	//}
	}
}

//Inspector
  /*
   * Get the weight between nodes u and v; return 0 if there is no edge.
   *
   * Preconditions: 
   *     u and v are legal labels (i.e. 0 <= u < G.size(), 0 <= v < G.size())
   */
EdgeWeight ListGraph::weight(NodeID u, NodeID v) const{
	//Check that the preconditions are met, and return 0 if one is not met
	if(u < 0.0 || v < 0.0 || u > edgeList.size() || v > edgeList.size())
		return 0.0;
	else
		//If the preconditions are met, then return the weight of that edge
		return M[u][v];
}

//Inspector
  /*
   * Return a list of NodeID/EdgeWeight pairs describing the nodes adjacent to edge w.
   *
   * Preconditions: u is a legal label.
   */
std::list<NWPair> ListGraph::getAdj(NodeID u) const{

}

//Inspector
  /*
   * Return the degree (i.e. the number of neighbors) of node u.
   *
   * Preconditions: u is a legal label;
   */
unsigned ListGraph::degree(NodeID u) const{

}

//Inspector
  /*
   * Return the number of nodes in the graph.
   */
unsigned ListGraph::size() const{
	return edgeList.size();
}

//Inspector
 /* 
  * Return the number of edges in the graph.
  */
unsigned ListGraph::numEdges() const{
	return num_edges;
}