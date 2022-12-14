class Solution:
    def numSquares(self, n: int) -> int:
        dp = [0] * (n+1)

        for i in range(1, n+1):
            dp[i] = i   # worst case for dp[i] is i
            j = 1
            while j * j <= i:
                dp[i] = min(dp[i], dp[i-j*j]+1)
                j += 1
        return dp[-1]


def test(test_name, n, expected):
    res = Solution().numSquares(n)
    if res == expected:
        print(test_name + ' succeed')
    else:
        print(test_name + ' fail')


if __name__ == '__main__':
    n1 = 12
    expected1 = 3
    test('test1', n1, expected1)

    n2 = 13
    expected2 = 2
    test('test2', n2, expected2)

