## 2018-01-17

**NOTICE**: 并非所有的编译器都支持，通常最新的`gcc`均支持；

- `#`: 将宏名称转换为字符串；
- `##`: 拼接宏名称；
- 可变参数宏的实现：
  - C99: `__VA_ARGS__`

  ``` c
  #define MY_PRINT(...) printf(__VA_ARGS__)
  ```

  - gcc extension: `args...`

  ``` c
  #define MY_PRINT(args...) printf(args)
  ```

## 2018-04-09

`char`可以表示的数据范围因不同的编译器而不同，通常，其一定可以表示的数据范围是`0~127`（最小数据范围），即ASCII码的取值范围；

如果编译器把`char`对待为`unsigned`的时候，其表示的值的范围是`0~255`，如果将其视为`signed`的时候，则其可以表示的数据范围就是`-128~127`；不同的平台（编译器）存在不同的默认配置（可能将`char`视为`unsigned`或者`signed`），因此，对于使用`char`表示超出`0~127`范围值的时候，可移植性是大打折扣的；

另外，可以通过编译选项来控制`char`被对待为`signed`还是`unsigned`;
其中，`-funsigned-char`和`-fno-signed-char`是将`char`对待为`unsigned`的，而`-fsigned-char`和`-fno-unsigned-char`是将`char`对待为`signed`的；
