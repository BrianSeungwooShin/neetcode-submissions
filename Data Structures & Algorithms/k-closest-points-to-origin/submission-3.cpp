class Solution {
public:
    double dist(int x, int y){
        return sqrt(x*x + y*y);
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> output;

        priority_queue<pair<double,vector<int>>>maxHeap;

        for(auto& point : points){
            double distance = dist(point[0],point[1]);
            maxHeap.push({distance,point});
            if(maxHeap.size() > k){
                maxHeap.pop();
            }
        }

        while(!maxHeap.empty()){
            output.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return output;
    }
};
