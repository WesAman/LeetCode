class MyHashSet {
public:
    vector<int> port;  // Vector to store the elements of the hash set

    MyHashSet() {
        // Constructor for MyHashSet (no explicit implementation)
    }

    // Function to add an element to the hash set
    void add(int key) {
        if (!contains(key)) {  // Check if the key is not already present in the hash set
            port.push_back(key);  // Add the key to the vector
        }
    }

    // Function to remove an element from the hash set
    void remove(int key) {
        auto it = find(port.begin(), port.end(), key);  // Find the iterator pointing to the key in the vector
        if (it != port.end()) {  // If the key is found
            port.erase(it);  // Erase the key from the vector
        }
    }

    // Function to check if an element is present in the hash set
    bool contains(int key) {
        auto it = find(port.begin(), port.end(), key);  // Find the iterator pointing to the key in the vector
        return it != port.end();  // Return true if the key is found, false otherwise
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
