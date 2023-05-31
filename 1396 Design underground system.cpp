class UndergroundSystem {
    unordered_map<int, pair<string, int>> m;  // Map to store check-in information for each passenger  
//m: An unordered map that stores the check-in information for each passenger. It maps the passenger ID to a pair of the check-in station and check-in time.

    unordered_map<string, unordered_map<string, pair<int, int>>> v;  // Map to store travel information for each route
    //v: An unordered map that stores the travel information for each route. It maps the start station to another unordered map, which maps the end station to a pair of the total time and the count of trips for that route.

public:
    UndergroundSystem() {
        // Constructor for the UndergroundSystem class
    }
    
    //checkIn(): Records the check-in of a passenger by setting the check-in station and time in the m map based on the passenger ID.
    void checkIn(int id, string stationName, int t) {
        m[id].first = stationName;  // Set the check-in station for the passenger ID
        m[id].second = t;  // Set the check-in time for the passenger ID
    }
    
//checkOut(): Records the check-out of a passenger by retrieving the check-in information from the m map based on the passenger ID. It updates the travel information in the v map for the corresponding route. If the route does not exist, it creates a new entry with the count of trips set to 1 and the total time set as the difference between check-out and check-in time. If the route already exists, it increments the count of trips and adds the time difference to the total time.

    void checkOut(int id, string stationName, int t) {
        if (v[m[id].first].count(stationName) <= 0) {
            // If the travel route does not exist in the map, create a new entry
            v[m[id].first][stationName].second = 1;  // Set the count of trips for this route to 1
            v[m[id].first][stationName].first = t - m[id].second;  // Set the total time for this route as the difference between check-out and check-in time
        }
        else {
            // If the travel route already exists, update the existing entry
            v[m[id].first][stationName].second++;  // Increment the count of trips for this route
            v[m[id].first][stationName].first += t - m[id].second;  // Add the time difference to the total time for this route
        }
    }
    
//getAverageTime(): Retrieves the average time for a specific travel route by accessing the total time and count of trips from the v map based on the start and end stations. It calculates the average time by dividing the total time by the number of trips.


    double getAverageTime(string startStation, string endStation) {
        double averageTime = (double)(v[startStation][endStation].first) / (double)(v[startStation][endStation].second);
        // Calculate the average time by dividing the total time by the number of trips
        return averageTime;
    }
};


/**


 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);

 */
