class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int s = 0;                  // Start of search range
        int e = nums.size() - 1;    // End of search range

        while (s <= e) {

            // Find the middle index safely
            int mid = s + (e - s) / 2;

            // Target found
            if (nums[mid] == target) {
                return mid;
            }

            // Target is smaller than middle element
            // So search in the left half
            else if (nums[mid] > target) {
                e = mid - 1;
            }

            // Target is greater than middle element
            // So search in the right half
            else {
                s = mid + 1;
            }
        }

        // When the loop ends, s > e.
        // 's' is now the first position where target
        // can be inserted while keeping the array sorted.
        return s;
    }
};