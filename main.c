#include <stdio.h>

/*
 *         file: main.c
 *  description: Linux下C语言彩色控制台编程实践_基于gcc,gdb,VSCode和WSL_Ubuntu_18.04
 *       author: B站/微信公众 香辣恐龙蛋（从公众号可以获取各期的笔记和源代码）
 *         date: 2020-09-11
 *      version: 6.0
 * modification:
 *               major  minor  date        brief
 *                 6.0      A  2020-09-11  最初版本, 简单单文件编译
 *                 8.0      A  2020-09-11  增加对add()的调用
 *       remark:
 *               0. 在linux中运行程序 ./test
 *               1. 1.0A版本的编译指令 gcc main.c -o test
 *                  把文件编译到一个叫做test的二进制可执行文件
 *               2. 8.0A版本的编译指令 gcc main.c ./submodule/module.c -I ./ -I ./submodule/  -o test
 *                  在当前目录下找头文件 -I ./
 *                  在当前目录/submodule/找头文件 -I ./
 * 
 */

#include "module.h"
/*
 *     function: int main(void)
 *   desription: 简单单文件编译
 *       author: B站/微信公众 香辣恐龙蛋
 *         date: 2020-09-11
 *        input: 
 *       output: 
 *      version: 6.0
 * modification:
 *               major      minor       date        brief
 *                 6.0          A       2020-09-11  简单单文件编译
 *                 8.0          A       2020-09-11  增加对add()的调用
 */
int main(void)
{
  printf("hello world\r\n");
  int a = 2, b = 4;
  int res = add(a, b);
  printf("res = %d\r\n", res);
  return 0;
}