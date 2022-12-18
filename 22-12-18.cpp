//#pragma warning(disable:4996)



//剑指 Offer 58 - II. 左旋转字符串

//#include<string>
//class Solution {
//public:
//    string reverseLeftWords(string s, int n) {
//        return s.substr(n) + s.substr(0, n);
//    }
//};



//面试题67. 把字符串转换成整数

//class Solution {
//public:
//    int strToInt(string str)
//    {
//        int k = 0;
//        while (k < str.size() && str[k] == ' ') k++;
//        bool is_minus = false;
//        if (str[k] == '-')is_minus = true, k++;
//        else if (str[k] == '+')k++;
//        long long ret = 0;
//        while (k < str.size() && str[k] >= '0' && str[k] <= '9')
//        {
//            if (ret > INT_MAX)  break;
//            ret = ret * 10 + str[k] - '0';
//            k++;
//        }
//        if (is_minus)ret *= -1;
//        if (ret > INT_MAX)ret = INT_MAX;
//        if (ret < INT_MIN)ret = INT_MIN;
//        return ret;
//    }
//};



//206. 反转链表

//class Solution {
//public:
//    ListNode* reverseList(ListNode* head)
//    {
//        if (!head || !head->next) return head;
//        auto p = head, q = p->next;
//        while (q)
//        {
//            auto o = q->next;
//            q->next = p;
//            p = q, q = o;
//        }
//        head->next = NULL;
//        return p;
//    }
//};



//剑指 Offer 52. 两个链表的第一个公共节点

//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//        auto p = headA, q = headB;
//        while (p != q)
//        {
//            if (!p) p = headB;
//            else p = p->next;
//            if (!q) q = headA;
//            else q = q->next;
//        }
//        return p;
//    }
//};



//29. 删除链表中重复的节点

//class Solution {
//public:
//    ListNode* deleteDuplication(ListNode* head) {
//        //头节点
//        auto dummy = new ListNode(-1);
//        dummy->next = head;
//        auto p = dummy;
//        while (p->next)
//        {
//            auto q = p->next;
//            //扫描到相同的一个
//            while (q->next && p->next->val == q->next->val) q = q->next;
//            //没有相同的继续下一个
//            if (q == p->next) p = q;
//            //相同的删掉
//            else p->next = q->next;
//        }
//        return dummy->next;
//    }
//};








//
//int main()
//{
//	return 0;
//}



