#include <algorithm>
#include <numeric>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2};
    // 正确的结构化绑定用法（解包 pair 或 tuple）
    pair<int, int> p = {1, 2};
    auto [first, second] = p;

    // 用 std::accumulate 求和
    int sum = accumulate(v.begin(), v.end(), 0);

    // 用 for_each 和 lambda 输出元素
    for_each(v.begin(), v.end(), [](int x) {
        // 这里可以输出或处理元素
        printf("%d\n", x * 2);
    });

    return 0;
}