#include <iostream>
#include <vector>
using namespace std;
int n, l, r;

int main() {
    scanf("%d", &n);
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        nums[i] += i > 0 ? nums[i - 1] : 0; // 前缀和
    }
    while (scanf("%d%d", &l, &r) != EOF) {
        printf("%d\n", nums[r] - (l > 0 ? nums[l - 1] : 0)); // 区间和
    }
}