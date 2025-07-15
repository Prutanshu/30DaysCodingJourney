class Solution {
public:
    int maxArea(vector<int>& height) {
        int sum = 0;
        int n = height.size();

        for (int i = 0; i < n - 1; i++) {
            if (height[i] == 0) continue;

            for (int j = n - 1; j > i;j--) {
                int h = min(height[i], height[j]);
                int w = j - i;
                int area = h * w;
                sum = max(sum, area);
                if (height[j] >= height[i]) break;
            }
        }

        return sum;
    }
};
