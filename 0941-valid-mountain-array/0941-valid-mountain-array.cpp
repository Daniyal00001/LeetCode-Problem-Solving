class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int sizeArr = arr.size();
        
        // check one
        if(sizeArr < 3){
            return false;
        }

        // check increasing and hike up to highest point
        int i = 0;
        while(i + 1 < sizeArr && arr[i] < arr[i+1]){
            i++;
        }

        // check whether the highest node isn't Starting or last node
        if(i == 0 || i == sizeArr-1 ){
            return false;
        }

        // now hike down
        while(i + 1 < sizeArr && arr[i] > arr[i+1]){
            i++;
        }

        return i == sizeArr-1;
    }
};