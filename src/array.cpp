#include <algorithm>
#include <array>
#include <iostream>
using namespace std;

int main() {
    // C++风格的数组声明
    array<int, 5> arr = {1, 2, 3, 4, 5};
    // 使用std::array的size()方法获取数组大小
    cout << "Size of array: " << arr.size() << endl;
    // 使用.at()方法访问元素,注意.at()会进行边界检查,所以对比索引[]访问更慢一点
    cout << "Element at index 2: " << arr.at(2) << endl;
    // 使用for-loop遍历数组
    for (auto num : arr) {
        cout << num << " ";
    }
    // 支持结构化绑定
    auto [x, y, z, w, v] = arr;
    cout << "\nStructured binding: " << x << ", " << y << ", " << z << ", " << w << ", " << v << endl;
}