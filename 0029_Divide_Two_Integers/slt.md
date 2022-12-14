## Solution 1 Use subtraction

- t-complexity: $O(logn)$
- s-complexity: $O(1)$

题目明确不能用乘、除、模运算，我们只使用加减法和位移运算。temp只会是divisor的2、4、8...倍，每当dividend减去i倍的divisor，就往结果里加i。

INT_MAX 定义为2**32 - 1， 也就是2147483647。INT_MIN不能直接定义为-2147483648，因为这是一个表达式，是2147483648取负数。这样写已经溢出。INT_MIN定义为(-INT_MAX)-1。cpp中一开始把可能溢出的case考虑了。python在最后考虑。其实这道题可能溢出的就只有一种情况， 即dividend=-2147483648，且divisor=-1。


左移的数学意义：
在数字没有溢出的前提下，对于正数和负数，左移一位都相当于乘以2的1次方，左移n位就相当于除以2的n次方。

需要考虑的情况：

1. dividend = INT_MIN
  这时用abs 在leetcode上会报错，所以不管divisor是1,-1还是其他数，都需要在转换一下
2. divisor = INT_MIN
  由于最后会取整，所以这个结果必然是0
3. dividend = INT_MAX
  我们里面循环最后不成立的条件是 dvd < ...，这样右边就溢出了，所以里面在比较的时候也要特殊处理

在Python中不需要考虑上面这些情况，只用在最后返回的时候判断下有没有溢出就行了
