#include <iostream>
#include <vector>
using namespace std;
int n, m;

int main() {
    int total = 0;
    scanf("%d%d", &n, &m);
    vector<vector<int>> nums(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &nums[i][j]);
            total += nums[i][j]; // 计算总和
        }
    }
    int ans = total;
    int pre = 0, tmp = 0;
    // 计算每一行的和
    for (int i = 0; i < n; i++) {
        tmp = 0;
        for (int j = 0; j < m; j++) {
            tmp += nums[i][j]; // 当前行的和
        }
        pre += tmp;                           // 累加到前缀和
        ans = min(ans, abs(total - 2 * pre)); // 更新最小值
    }
    // 计算每一列的和
    pre = 0;
    for (int j = 0; j < m; j++) {
        tmp = 0;
        for (int i = 0; i < n; i++) {
            tmp += nums[i][j]; // 当前列的和
        }
        pre += tmp;                           // 累加到前缀和
        ans = min(ans, abs(total - 2 * pre)); // 更新最小值
    }
    printf("%d\n", ans); // 输出结果
}