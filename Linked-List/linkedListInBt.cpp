
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isSubPath(ListNode *head, TreeNode *root,ListNode*tempHead){
       if(root==nullptr){
            return false;
        }
        if(tempHead==nullptr){
            return true;
        }
        bool o1,o2,o3;
        if(tempHead->val==root->val){
            o1=isSubPath(head,root->left,tempHead->next)||isSubPath(head,root->right,tempHead->next);
        }
        else{
           o2=isSubPath(head,root->left,head);
           o3=isSubPath(head,root->right,head);
        }
        return o1||o2||o3;
    }
    bool isSubPath(ListNode *head, TreeNode *root)
    {
          return isSubPath(head,root,head);       
        
    }
};