### Solution 1 二分

- t-complexity $O(log n)$
- s-complexity $O(1)$

总元素个数是奇数个

当我们从中心移除一对元素时

11445566899

左：1144；右：66899

与原数组一样，包含单个元素的子数组元素个数必为奇数，不包含单个元素的子数组必为偶数。 因此，当原数组移除一对元素后，然后计算出哪一侧的子数组元素个数是奇数，这样我们就能够知道下一步应该在哪一侧进行搜索。
