#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(),a.end()
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

void merge(vector<int> &array, int const l, int const m, int const r)
{
    auto const subArrayOne = m - l + 1;
    auto const subArrayTwo = r - m;

    auto *lArray = new int[subArrayOne],
         *rArray = new int[subArrayTwo];
 
    for (auto i = 0; i < subArrayOne; i++)
        lArray[i] = array[l + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rArray[j] = array[m + 1 + j];
 
    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = l;

    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (indexOfMergedArray == 0) {
            array[indexOfMergedArray++] = lArray[indexOfSubArrayOne++];
            array[indexOfMergedArray++] = rArray[indexOfSubArrayTwo++];
            continue;
        }
        if (lArray[indexOfSubArrayOne] != (rArray[indexOfSubArrayTwo] + array[indexOfMergedArray - 1])/2.0) {
            array[indexOfMergedArray++] = lArray[indexOfSubArrayOne];
            array[indexOfMergedArray] = rArray[indexOfSubArrayTwo];
            indexOfSubArrayOne++;
            indexOfSubArrayTwo++;
        }
        else {
            array[indexOfMergedArray++] = rArray[indexOfSubArrayTwo];
            array[indexOfMergedArray] = lArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = lArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }

    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}

void mergeSort(vector<int> &array, int const begin, int const end)
{
    if (begin >= end)
        return; 
 
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}