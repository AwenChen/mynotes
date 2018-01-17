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
