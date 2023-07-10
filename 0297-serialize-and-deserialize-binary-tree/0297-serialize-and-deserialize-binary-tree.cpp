/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *};
 */
class Codec
{
    public:

       	// Encodes a tree to a single string.
        string serialize(TreeNode *root)
        {
            string s = "";
            if (!root) return s;
            queue<TreeNode*> q;
            q.push(root);
            while (!q.empty())
            {
                auto node = q.front();
                q.pop();
                if (node == NULL)
                {
                    s.append("%,");
                }
                else
                {
                  s.append(to_string(node->val) + ',');
                }
                if (node)
                {
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            return s;
        }

   	// Decodes your encoded val to tree.
    TreeNode* deserialize(string s)
    {
        int n = s.length();
        if (n == 0) return NULL;
        stringstream str(s);
        string copy="";
        getline(str, copy, ',');
        queue<TreeNode*> q;
        TreeNode *node = new TreeNode(stoi(copy));
        q.push(node);

        while (!q.empty())
        {
            getline(str,copy,',');
            auto root = q.front();
            if (copy == "%")
            {
                root->left = NULL;
            }
            else
            {
                root->left = new TreeNode(stoi(copy));
                q.push(root->left);
            }
            getline(str, copy, ',');
            if (copy == "%")
            {
                root->right = NULL;
            }
            else
            {
                root->right = new TreeNode(stoi(copy));
                q.push(root->right);
            }
            q.pop();
        }
        return node;
    }
};