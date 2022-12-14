from typing import *
from util_py.tree import *

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getDepth(self, node):
        if not node:
            return 0
        l = self.getDepth(node.left)
        r = self.getDepth(node.right)
        if l == -1 or r == -1:
            return -1
        if abs(l-r) > 1:
            return -1
        return max(l, r) + 1

    def isBalanced(self, root: TreeNode) -> bool:
        return self.getDepth(root) != -1


def test(test_name, root, expected):
    res = Solution().isBalanced(root)
    if res == expected:
        print(test_name + ' succeed')
    else:
        print(test_name + ' fail')


if __name__ == "__main__":
    #     3
    #    / \
    #   9  20
    #     /  \
    #    15   7
    root1 = TreeNode(3)
    root1.left = TreeNode(9)
    root1.right = TreeNode(20)
    root1.right.left = TreeNode(15)
    root1.right.right = TreeNode(7)
    expected1 = True
    test('test1', root1, expected1)

    #        1
    #       / \
    #      2   2
    #     / \
    #    3   3
    #   / \
    #  4   4
    root2 = TreeNode(1)
    root2.left = TreeNode(2)
    root2.right = TreeNode(2)
    root2.left.left = TreeNode(3)
    root2.left.right = TreeNode(3)
    root2.left.left.left = TreeNode(4)
    root2.left.left.right = TreeNode(4)
    expected2 = False
    test('test2', root2, expected2)

