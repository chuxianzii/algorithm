# algorithm
笔试算法题

## 细节
- 对于数组大小使用`const auto`来定义, 因为通过`size()`获取的类型实际上是`size_type`无符号整数类型，转换成`int`可能会溢出
- 在`for`循环中, 最好使用`<`而不是`<=`
- `int`类型的最小值常量`INT_MIN`, 最大值常量`INT_MAX`