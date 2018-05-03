//
// Created by lgy on 18/5/3.
//

#ifndef ARRAY_BINARYTREE_H
#define ARRAY_BINARYTREE_H

#include <vector>
using namespace std;
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class BinaryTree {

public:
    struct TreeNode {
            int val;
             TreeNode *left;
             TreeNode *right;
             TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
         };
    struct TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in);

};


#endif //ARRAY_BINARYTREE_H
