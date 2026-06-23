class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        long long ans = 0;
        queue<pair<TreeNode*, long long>> q;

        q.push({root, 0});

        while (!q.empty()) {
            int size = q.size();

            long long minPos = q.front().second;
            long long first = 0, last = 0;

            for (int i = 0; i < size; i++) {
                auto [node, idx] = q.front();
                q.pop();

                long long curr_id = idx - minPos;

                if (i == 0) first = curr_id;
                if (i == size - 1) last = curr_id;

                if (node->left)
                    q.push({node->left, 2 * curr_id + 1});

                if (node->right)
                    q.push({node->right, 2 * curr_id + 2});
            }

            ans = max(ans, last - first + 1);
        }

        return (int)ans;
    }
};