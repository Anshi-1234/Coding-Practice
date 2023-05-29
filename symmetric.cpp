bool issym(TreeNode* A1, TreeNode* A2) {
    if (A1 == NULL && A2 == NULL) {
        return true;
    }
    
    if (A1 != NULL && A2 != NULL && A1->val == A2->val) {
        return (issym(A1->left, A2->right) && issym(A1->right, A2->left));
    }
    
    return false;
}

int Solution::isSymmetric(TreeNode* A) {
    if (A == NULL) {
        return true;
    } 
    else if ((A->left == NULL && A->right == NULL) || (A->left && A->right)) {
        return issym(A->left, A->right);
    }
    
    return false;
}
