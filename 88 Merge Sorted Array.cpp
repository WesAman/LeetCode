class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i = 0;
       int j = 0;
       int k = 0;
    vector<int> mergedArray(m + n);

    while(i < m && j < n){
        if(nums1[i] <= nums2[j]){
            mergedArray[k] = nums1[i];
            i += 1;
        }
        else{
            mergedArray[k] = nums2[j];
            j += 1;
        }
        k += 1;
    }
    while (i < m) {
        mergedArray[k] = nums1[i];
        i += 1;
        k +=1 ;
    }
    while(j < n){
        mergedArray[k]=nums2[j];
        j += 1;
        k += 1;

    }
     for (int x = 0; x < m + n; x++) {
         nums1[x]=mergedArray[x];
        cout << mergedArray[x] << "LIGMA ";
    }

    }
};
