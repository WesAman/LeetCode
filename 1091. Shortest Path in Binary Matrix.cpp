class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int size = grid.size();
        int dx[] = {0, 0, 1, 1, 1, -1, -1, -1};  // Offsets for x coordinate
        int dy[] = {1, -1, 0, 1, -1, 0, 1, -1};  // Offsets for y coordinate
        
        if (grid[0][0] == 1) {
            return -1;  // If the starting cell is blocked, return -1 indicating no path is possible
        }
        
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        //Defines a priority queue named pq to store cells with their distances from the starting cell. 
        // •greater<pair<int, pair<int, int>>> is used, which makes it a min heap.
        //The priority queue is implemented as a min-heap, and it stores pairs of distance and cell coordinates.
        
        pq.push({0, {0, 0}});  // Push the starting cell with distance 0 to the priority queue
        

        //Enters a loop that continues until the priority queue becomes empty (all cells have been processed).
        while (!pq.empty()) {
            // Retrieves the top element (cell) with the minimum distance from the priority queue.
            auto front = pq.top();
            pq.pop();
            
            int distance = front.first;  // Current distance from the starting cell
            int x = front.second.first;  // Current x coordinate
            int y = front.second.second;  // Current y coordinate
            

              // Checks if the current cell is the destination cell (bottom-right corner).
            if (x == size - 1 && y == size - 1) {
              
                return distance + 1;  // If reached the destination cell, return the shortest distance + 1
            }
            
            for (int i = 0; i < 8; i++) {
                int xx = x + dx[i];  // Calculate the next x coordinate using the offset
                int yy = y + dy[i];  // Calculate the next y coordinate using the offset
                
                if (xx >= 0 && xx < size && yy >= 0 && yy < size && grid[xx][yy] == 0) {
                    // Check if the next coordinates are within the grid and the cell is not blocked
                    
                    pq.push({distance + 1, {xx, yy}});  // Push the next cell to the priority queue with updated distance
                    grid[xx][yy] = 1;  // Mark the next cell as visited (block it) to avoid revisiting
                }
            }
        }
        
        return -1;  // If no path is found, return -1
    }
};

/*
•The priority_queue pq in this code does not directly take its contents from 'grid'.
Instead, the pq is used to store cell coordinates along with their corresponding distances.

•The algorithm uses the pq to explore the cells in the grid and determine the shortest path.
It starts by pushing the starting cell's coordinates (0, 0) into the pq with a distance of 0.

•Then, in the while loop, it repeatedly pops the top cell from the pq, retrieves its coordinates and distance, 
and performs certain operations based on the cell's properties.

•When exploring neighboring cells, the algorithm calculates the coordinates of these cells based on the current cell's coordinates.
It checks if the neighboring cell is within the grid bounds and is unblocked (contains 0) in the grid.
If so, it calculates the distance to the neighboring cell and pushes the neighboring cell's coordinates and updated distance into the pq.

•So, the pq is not directly populated with the contents of the grid. 
It uses the grid information to explore cells and determine their distances, 
and then stores these cell coordinates and distances in the pq for further processing.

chatgpt explanation: The code you provided appears to implement a variation of the Breadth-First Search (BFS) algorithm.

BFS is a graph traversal algorithm that explores all the vertices of a graph in breadth-first order,
i.e., it visits all the vertices at the same level before moving to the next level. 
It starts from a given source vertex and explores its neighbors before moving to the next level of vertices.

In your code, the algorithm explores the cells of a binary matrix by using a priority queue.
It starts from the top-left cell (0, 0) and proceeds to explore neighboring cells in a breadth-first manner.
The priority queue is used to store cells and their corresponding distances from the starting cell.

The algorithm continuously pops the cell with the minimum distance from the priority queue and examines its neighboring cells.
If a neighboring cell is unblocked (contains 0) and within the grid bounds, it is added to the priority queue with an updated distance.
This process continues until either the destination cell (n-1, n-1) is reached or all possible paths have been explored.

Therefore, while not an exact implementation of BFS, the code you provided shares 
similarities with BFS in terms of exploring neighboring cells in a breadth-first 
manner and using a priority queue to manage the order of cell exploration based on their distances.
*/
