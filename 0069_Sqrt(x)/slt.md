### 思路1 二分法



### 思路2 牛顿迭代法

见 https://www.zhihu.com/question/20690553/answer/146104283
p
`X(n+1)=[X(n)+p/Xn]/2`

具体到开平方，可以参考下面两张图

注意返回int类型，python需要处理一下

### Solution3 遍历尝试

- 时间复杂度 O(n^(1/2))
- 空间复杂度 O(1)
