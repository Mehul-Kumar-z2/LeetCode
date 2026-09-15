class LRUCache {
public:
    int capacity;

    list<pair<int, int>> dll;

    unordered_map<int, list<pair<int, int>>::iterator> mp;

    LRUCache(int capacity) {
        this->capacity = capacity;
        mp.reserve(capacity);
    }

    int get(int key) {
        if (!mp.count(key))
            return -1;

        auto it = mp[key];

        int value = it->second;

        dll.splice(dll.begin(), dll, it);

        return value;
    }

    void put(int key, int value) {

        if (mp.count(key)) {

            auto it = mp[key];

            it->second = value;

            dll.splice(dll.begin(), dll, it);

            return;
        }

        dll.push_front({key, value});

        mp[key] = dll.begin();

        if (dll.size() > capacity) {

            auto last = dll.back();

            int oldKey = last.first;

            mp.erase(oldKey);

            dll.pop_back();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */