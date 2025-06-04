#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector的声明与初始化
    vector<int> vec1 = {1, 2, 3, 4, 5}; // 使用C++11的初始化列表
    vector<int> vec2(5, 10);            // 创建一个包含5个元素，每个元素值为10的vector
    vector<int> vec3(std::move(vec1));  // 使用std::move将vec1的内容移动到vec3
    cout << vec1.size() << endl;        // 输出vec1的大小，应该为0，因为内容已被移动
    cout << vec3.size() << endl;        // 输出vec3的大小，应该为5，因为vec1的内容已被移动到vec3
    vec1.clear();                       // 清空vec1，vec3现在拥有原vec1的内容

    cout << "-------------------------" << endl;

    // size()和capacity()的区别
    // size()返回当前元素的数量，capacity()返回分配的内存大小
    // 注意：capacity()可能大于或等于size()
    cout << "Size of vec2: " << vec2.size() << endl;         // 输出vec2的大小
    cout << "Capacity of vec2: " << vec2.capacity() << endl; // 输出vec2的容量
    cout << "-------------------------" << endl;

    // resize()和reserve()的使用
    // resize()会改变size(), 可能会改变capacity()（在size大于capacity时）
    // reserve()只会改变capacity()，不改变size()
    vec2.reserve(10);                                                          // 调整vec2的大小为10
    cout << "The size of vec2 after reserve: " << vec2.size() << endl;         // 输出调整后的大小
    cout << "New capacity of vec2 after reserve: " << vec2.capacity() << endl; // 输出调整后的容量
    cout << "-------------------------" << endl;

    vec2.resize(8, 20);                                                       // 调整vec2的大小为8，新增的元素值为20
    cout << "The size of vec2 after resize: " << vec2.size() << endl;         // 输出调整后的大小
    cout << "New capacity of vec2 after resize: " << vec2.capacity() << endl; // 输出调整后的容量
    cout << "-------------------------" << endl;

    //
}