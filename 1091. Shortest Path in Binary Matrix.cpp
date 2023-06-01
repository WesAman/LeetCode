class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int size = grid.size();
        int dx[] = {0, 0, 1, 1, 1, -1, -1, -1};  // Offsets for x coordinate
        int dy[] = {1, -1, 0, 1, -1, 0, 1, -1};  // Offsets for y coordinate
        
        if (grid[0][0] == 1) {
            return -1;  // If the starting cell is blocked, return -1 indicating no path is possible
        }
        
        
 //Defines a priority queue named 'pq' to store cells with their distances from the starting cell.
//The priority queue is implemented as a min-heap, and it stores pairs of distance and cell coordinates.       
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        
        
        pq.push({0, {0, 0}});  // Push the starting cell with distance 0 to the priority queue
        
        while (!pq.empty()) {
            auto front = pq.top();
            pq.pop();
            
            int distance = front.first;  // Current distance from the starting cell
            int x = front.second.first;  // Current x coordinate
            int y = front.second.second;  // Current y coordinate
            
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
