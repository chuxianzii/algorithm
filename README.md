# algorithm
笔试算法题

## 方法
- 双指针：快慢指针、滑动窗口
- 前缀和

## 细节
- 对于数组大小使用`const auto`来定义, 因为通过`size()`获取的类型实际上是`size_type`无符号整数类型，转换成`int`可能会溢出
- 在`for`循环中, 最好使用`<`而不是`<=`
- `int`类型的最小值常量`INT_MIN`, 最大值常量`INT_MAX`
- 牛顿迭代法求平方根：$x_{n+1} = (x_n + a / x_n) / 2$
- 先提升类型，再计算​​，避免中间步骤溢出
    - `(long long)mid * mid < x` ✅, 不会出现int溢出
    - `(long long)(mid * mid) < x` ❌，可能会出现int溢出
- 在二分过程中，引入变量对进行记录更新，以便返回结果
- 遍历容器使用`for(const auto& num : nums)`访问只读数据

## 好用的函数
- `lower_bound(ForwardIt first, ForwardIt last, const T& value)` 
    - 功能: 返回 ​第一个 ≥ 目标值​​ 的元素的迭代器
    - 如果所有元素都小于目标值，则返回 `end()`
- `upper_bound(ForwardIt first, ForwardIt last, const T& value)`
    - 功能: 返回 ​​第一个 > 目标值​​ 的元素的迭代器
    - 如果所有元素都 ≤ 目标值，则返回 `end()`
- `str.substr(size_t pos, size_t len)`
    - 功能：返回一个新的字符串，包含从pos开始的len个字符
    - 如果只提供pos，则len默认为字符串末尾
