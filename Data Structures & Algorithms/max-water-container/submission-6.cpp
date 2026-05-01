class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mostAmount = 0;

        for (int left = 0; left < heights.size();left++){
            int right = 1;
            while(right < heights.size()){
                int area = 0;
                int difference = right-left;
                if (heights[right] >= heights[left]){
                    area = difference * heights[left];
                } else {
                    area = difference * heights[right];
                }
            
                if(mostAmount < area){
                    mostAmount = area;
                }

                right++;

            }

        }

        return mostAmount;
        
        
    }
};
