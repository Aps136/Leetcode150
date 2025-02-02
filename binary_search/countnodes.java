class Solution {
    public int countNodes(TreeNode root) {
        if (root == null) return 0; 

        int leftHeight = getHeight(root.left);
        int rightHeight = getHeight(root.right);

        if (leftHeight == rightHeight) {
            return (int) Math.pow(2, leftHeight + 1) - 1; // 2^(h+1) - 1
        } else {
            return 1 + countNodes(root.left) + countNodes(root.right);
        }
    }

   
    private int getHeight(TreeNode node) {
        int height = 0;
        while (node != null) {
            height++;
            node = node.left; 
        }
        return height;
    }
}
