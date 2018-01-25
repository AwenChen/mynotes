#include <stdio.h>

#define MY_PRINT_C99(...)           printf(__VA_ARGS__)
#define MY_PRINT_GCC_EXT(args...)   printf(args)

#define VAR_TO_STRING(x)            #x
#define VAR_JOINT(x, y)             x##y

/* C99 feature */
#define LOGD_HEADER                 "DBG"
#define LOGI_HEADER                 "INFO"
#define LOGE_HEADER                 "ERR"
#define _LOG_(...)                  printf(__VA_ARGS__)
#define LOGD(fmt, ...)              _LOG_("[%s] "fmt, LOGD_HEADER, ##__VA_ARGS__)
#define LOGI(fmt, ...)              _LOG_("[%s] "fmt, LOGI_HEADER, ##__VA_ARGS__)
#define LOGE(fmt, ...)              _LOG_("[%s](%s:%d) "fmt, LOGE_HEADER, __FUNCTION__, __LINE__, ##__VA_ARGS__)

int main()
{
    int xy = 100;
    MY_PRINT_C99("my print in C99\n");
    MY_PRINT_GCC_EXT("my print in gcc extension\n");
    MY_PRINT_C99("%d\n", VAR_JOINT(x, y));
    MY_PRINT_GCC_EXT("%s\n", VAR_TO_STRING(helloworld));

    LOGD("hello my log\n");
    LOGI("just a info\n");
    LOGE("Fatal error\n");
    return 0;
}