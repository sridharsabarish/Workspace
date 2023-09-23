'''

Approach:

Source : https://www.interviewcake.com/concept/python3/topological-sort

'''

def topological_sort(digraph):
    
    indegrees= {node : 0 for node in digraph}

    for node in digraph:
        for neighbour in digraph[node]:
            indegrees[neighbour] +=1

    nodes_with_no_incoming_edges = [node for node in digraph if indegrees[node]==0]
    topological_ordering =[]


    while nodes_with_no_incoming_edges:

        node = nodes_with_no_incoming_edges.pop()
        topological_ordering.append(node)

        for neighbour in digraph[node]:
            indegrees[neighbour] -=1
            if indegrees[neighbour] ==0:
                nodes_with_no_incoming_edges.append(neighbour)

    if len(topological_ordering) == len(digraph):
        return topological_ordering
    else:
        raise Exception("Graph has a cycle!, No topological ordering exists" )