using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        int maxDepth(TreeNode* root) {
            if(root == nullptr) return 0;
            else
            {
                int leftH = maxDepth(root->left);
                int rightH = maxDepth(root->right);

                return max(leftH, rightH) + 1;
            }
        }
};