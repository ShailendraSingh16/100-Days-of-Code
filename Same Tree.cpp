class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL){
        return true;
        }
        if((p==NULL&&q!=NULL)||(p!=NULL&&q==NULL)||(p->val!=q->val)){
        return false;
    }
        if(isSameTree(p->left, q->left)==false||isSameTree(p->right, q->right)==false){
        return false;
    }
        return true;
    }
};
