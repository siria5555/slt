#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int s1 = g.size(), s2 = s.size();
        int p1 = 0, p2 = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while (p1 < s1 && p2 < s2) {
            if (g[p1] <= s[p2++])
                ++p1;
        }
        return p1;
    }
};

void test(string test_name, vector<int>& g, vector<int>& s, int expected) {
    int res = Solution().findContentChildren(g, s);
    if (res == expected) {
        printf("%s succeed\n", test_name.c_str());
    } else {
        printf("%s fail\n", test_name.c_str());
    }
}


int main() {
    vector<int> g1{1,2,3};
    vector<int> s1{1,1};
    int expected1 = 1;
    test("test1", g1, s1, expected1);

    vector<int> g2{1,2};
    vector<int> s2{1,2,3};
    int expected2 = 2;
    test("test2", g2, s2, expected2);

    vector<int> g3{10, 9, 8, 7};
    vector<int> s3{5, 6, 7, 8};
    int expected3{2};
    test("test3", g3, s3, expected3);

    return 0;
}
