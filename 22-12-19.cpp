#pragma warning(disable:4996)

//232. 用栈实现队列

//class MyQueue {
//public:
//    stack<int> s1, s2;
//    MyQueue() {
//
//    }
//
//    void push(int x) {
//        s1.push(x);
//    }
//
//    int pop() {
//        while (s1.size() > 1) s2.push(s1.top()), s1.pop();
//        int tmp = s1.top();
//        s1.pop();
//        while (s2.size()) s1.push(s2.top()), s2.pop();
//        return tmp;
//    }
//
//    int peek() {
//        while (s1.size() > 1) s2.push(s1.top()), s1.pop();
//        int tmp = s1.top();
//        while (s2.size()) s1.push(s2.top()), s2.pop();
//        return tmp;
//    }
//
//    bool empty() {
//        return s1.empty();
//    }
//};




//47. 全排列 II

//class Solution {
//public:
//    vector<vector<int>> permuteUnique(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        vector<vector<int>>ret;
//        do
//        {
//            ret.push_back(nums);
//        } while (next_permutation(nums.begin(), nums.end()));
//        return ret;
//    }
//};




//AcWing 862. 三元组排序

//#include<iostream>
//#include<algorithm>
//#define N 10010
//using namespace std;

//struct data
//{
//    int x;
//    double y;
//    string z;
//    bool operator<(const data& t)const
//    {
//        return x < t.x;
//    }
//}a[N];
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    for (int i = 0; i < n; i++) cin >> a[i].x >> a[i].y >> a[i].z;
//    sort(a, a + n);
//    for (int i = 0; i < n; i++)printf("%d %.2f %s\n", a[i].x, a[i].y, a[i].z.c_str());
//
//}



//剑指 Offer 15. 二进制中1的个数


//class Solution {
//public:
//    int hammingWeight(uint32_t n) {
//        //lowbit
//        int res = 0;
//        while (n) n -= n & -n, res++;
//        return res;
//
//        //循环写法
//        int res = 0;
//        for (int i = 0; i < 32; i++)
//        {
//            if (n >> i & 1)
//            {
//                res++;
//            }
//        }
//        return res;
//        }
//    }
//};


//剑指 Offer 57. 和为s的两个数字

//哈希表
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        unordered_set<int> a;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (a.count(target - nums[i])) return { nums[i],target - nums[i] };
//            else a.insert(nums[i]);
//        }
//        return{ -1,-1 };
//    }
//};


//剑指 Offer 40. 最小的k个数

//class Solution {
//public:
//    vector<int> getLeastNumbers(vector<int>& arr, int k) {
//        sort(arr.begin(), arr.end());
//        vector<int> res;
//        for (int i = 0; i < k; i++) res.push_back(arr[i]);
//        return res;
//    }
//};


//剑指 Offer 06. 从尾到头打印链表

//class Solution {
//public:
//    vector<int> reversePrint(ListNode* head) {
//        vector<int> res;
//        while (head)
//        {
//            res.push_back(head->val);
//            head = head->next;
//        }
//        reverse(res.begin(), res.end());
//        return res;
//    }
//};



//剑指 Offer 21. 调整数组顺序使奇数位于偶数前面

//class Solution {
//public:
//    vector<int> exchange(vector<int>& nums) {
//        int i = 0, j = nums.size() - 1;
//        while (i < j)
//        {
//            while (i < j && nums[i] % 2) i++;
//            while (i < j && nums[j] % 2 == 0) j--;
//            if (i < j) swap(nums[i], nums[j]);
//        }
//        return nums;
//    }
//};


//剑指 Offer 53 - II. 0～n-1中缺失的数字

//class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//        int a = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] == a) ++a;
//            else return a;
//        }
//        return a;
//    }
//};

//剑指 Offer 53 - I. 在排序数组中查找数字 I

//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        int cnt = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] == target) cnt++;
//        }
//        return cnt;
//    }
//};
