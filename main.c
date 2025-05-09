/*
 * Copyright (c) 2023. All rights reserved.
 * 文件名：main.c
 * 文件标识：见配置管理计划书
 * 摘要：演示基础C语言语法
 */

 #include <stdio.h>

 /**
  * @brief 程序入口函数
  * @details 演示条件判断、循环和基本运算
  * @return 程序退出状态码(0表示正常退出)
  */
 int main(void)
 {
     /* 变量定义区域 */
     int x = 5;
     int y = 10;
     int i = 0;
     int sum = 0;
     int arr[3] = {1, 2, 3};
     int a = 5;
     int b = 3;
     int c = 0;
 
     /* 条件判断演示 */
     if (x == 5) {
         printf("x等于5\n");
     } else if (x == 10) {
         printf("x等于10\n");
     } else {
         printf("x既不等于5也不等于10\n");
     }
 
     /* for循环演示 */
     for (i = 0; i < 5; i++) {
         printf("循环计数: %d\n", i);
     }
 
     /* 累加求和演示 */
     sum = 0;
     for (i = 1; i <= 10; i++) {
         sum += i;
     }
     printf("1到10的和为: %d\n", sum);
 
     /* 数组遍历演示 */
     for (i = 0; i < 3; i++) {
         printf("数组元素: %d\n", arr[i]);
     }
 
     /* 基本运算演示 */
     c = a + b;
     printf("c的值: %d\n", c);
 
     return 0;
 }