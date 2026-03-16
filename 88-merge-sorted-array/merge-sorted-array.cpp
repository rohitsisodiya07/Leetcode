class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> ans(m + n);

        int i = 0;
        int j = 0;
        int k = 0;

        while (j < m && k < n) {

            if (nums1[j] <= nums2[k]) {
                ans[i] = nums1[j];
                j++;
            } else {
                ans[i] = nums2[k];
                k++;
            }

            i++;
        }

        while (j < m) {
            ans[i] = nums1[j];
            i++;
            j++;
        }

        while (k < n) {
            ans[i] = nums2[k];
            i++;
            k++;
        }

        nums1 = ans;
    }
};