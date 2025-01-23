int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int max_area = 0;

    while (left < right) {
        int area = (right - left) * (height[left] < height[right] ? height[left] : height[right]);
        max_area = (area > max_area) ? area : max_area;

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
    
}
