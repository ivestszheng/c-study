#include <stdio.h>
  
/*定义两个全局变量*/
int x=1;
int y=2;
int addtwonum();
int main(void)
{
    int result;
    result = addtwonum();
    printf("result 为: %d\n",result);
    return 0;
}
// gcc -fexec-charset=gbk addtwonum.c test.c -o main
// 用上面这条命令编译生成 main.exe