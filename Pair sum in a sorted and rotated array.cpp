class Solution {
public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        int n = arr.size();

        int pivot = -1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                pivot = i;
                break;
            }
        }

        int left = (pivot + 1) % n;
        int right = pivot;

        if (pivot == -1) {
            left = 0;
            right = n - 1;
        }

        while (left != right) {
            int sum = arr[left] + arr[right];

            if (sum == target)
                return true;

            if (sum < target)
                left = (left + 1) % n;
            else
                right = (n + right - 1) % n;
        }

        return false;
    }
};