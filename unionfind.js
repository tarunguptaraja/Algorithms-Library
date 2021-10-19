<script>

// Javascript program for union-find
// algorithm to detect cycle
// in a graph

// V-> no. of vertices &
// E->no.of edges
var V, E;

// Collection of all edges
var edge;

class Edge
{
	constructor()
	{
		this.src = 0;
		this.dest = 0;
	}
};

// Creates a graph with V
// vertices and E edges
function initialize(v,e)
{
	V = v;
	E = e;
	edge = Array.from(Array(E), () => Array());
}

// A utility function to find
// the subset of an element i
function find(parent, i)
{
	if (parent[i] == -1)
		return i;
		
	return find(parent,
				parent[i]);
}

// A utility function to do
// union of two subsets
function Union(parent, x, y)
{
	parent[x] = y;
}

// The main function to check
// whether a given graph
// contains cycle or not
function isCycle()
{
	
	// Allocate memory for
	// creating V subsets
	var parent = Array(V).fill(0);
	
	// Initialize all subsets as
	// single element sets
	for(var i = 0; i < V; ++i)
		parent[i] =- 1;
	
	// Iterate through all edges of graph,
	// find subset of both vertices of every
	// edge, if both subsets are same, then
	// there is cycle in graph.
	for (var i = 0; i < E; ++i)
	{
		var x = find(parent,
					edge[i].src);
		var y = find(parent,
					edge[i].dest);
		
		if (x == y)
			return 1;
		
		Union(parent, x, y);
	}
	return 0;
}

// Driver code
/* Let us create the following graph
	0
	| \
	| \
	1---2 */
var V = 3, E = 3;
initialize(V, E);

// Add edge 0-1
edge[0].src = 0;
edge[0].dest = 1;

// Add edge 1-2
edge[1].src = 1;
edge[1].dest = 2;

// Add edge 0-2
edge[2].src = 0;
edge[2].dest = 2;

if (isCycle() == 1)
	document.write("graph contains cycle");
else
	document.write("graph doesn't contain cycle");
	

</script>
