#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Tree_Node
{
public:
    int data;
    Tree_Node *left;  // left node
    Tree_Node *right; // right node

    Tree_Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
// breadth first search(BFS) and depth first search (DFS) are two ways to traverse on a tree

// DFS:preorder(ROOT-LEFT-RIGHT),inorder(LEFT-ROOT-RIGHT) and postorder(LEFT-RIGHT-ROOT)

void pre_solve(Tree_Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    /// print value of root node
    ans.push_back(root->data);
    // explore left part
    pre_solve(root->left, ans);
    // explore right right
    pre_solve(root->right, ans);
}
vector<int> preorderTraversal(Tree_Node *root)
{
    vector<int> ans;
    pre_solve(root, ans);
    return ans;
}

// BFS: print level by level (always start by queue)

void levelOrder(Tree_Node *root)
{
    if (root == NULL)
        return;
    queue<Tree_Node *> q;
    q.push(root);
    while (q.empty() == false)
    {                                     // you can also write this condition as !q.empty
        Tree_Node *frontnode = q.front(); // to take front element
        q.pop();                          // front element is popped
        cout << frontnode->data << " ";
        if (frontnode->left != NULL)
            q.push(frontnode->left); // if node's left exists then we push it into the queue

        if (frontnode->right != NULL)
            q.push(frontnode->right);
    } // complexity=O(n)in all cases
}

int main()
{
    return 0;
    Tree_Node *root = new Tree_Node(10);
    Tree_Node *temp1 = new Tree_Node(20);
    Tree_Node *temp2 = new Tree_Node(30);

    root->left = temp1;
    root->right = temp2;
}
