### Solution1 DFS

- 时间复杂度 $O(n * 2^n)$
    共有 n 个节点，每个节点有选和不选两种决策，共 $2^n$。对于每个方案最坏情况需要 O(n) 的复杂度进行拷贝并添加到结果集。
- 空间复杂度 $O(n * 2^n)$
    最多有 2^n 种方案，每个方案最多有 n 个元素
