#include "module.h"

/*
 *         file: main.c
 *     function: int add(const int a, const int b)
 *  description: 多文件编译演示
 *       author: B站/微信公众 香辣恐龙蛋（从公众号可以获取各期的笔记和源代码）
 *         date: 2020-09-11
 *      version: 8.0
 * modification:
 *               major  minor  date        brief
 *                 8.0      A  2020-09-11  最初版本, 简单加法
 *       remark: 
 */

int add(const int a, const int b)
{
  int res = a + b;
  printf("operation: %d + %d = %d\r\n", a, b, res);
  return res;
}