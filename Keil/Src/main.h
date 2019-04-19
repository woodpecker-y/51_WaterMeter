#ifndef __MAIN_H__
#define __MAIN_H__

#include <reg52.h>

#define uchar unsigned char
#define uint  unsigned int

// LCD1602
sbit LCD_RS = P2 ^ 0;	// 液晶数据命令选择端
sbit LCD_RW = P2 ^ 1;   // 读/写选择端(H/L)
sbit LCD_EN = P2 ^ 2;   // 液晶使能端
sfr LCD_Port= 0x80;

// 水流量计
sbit FlowmeterPort = P3 ^ 2;

// 延时 z ms
void delay_ms(uint z);

//value: 要转换的整数，string: 转换后的字符串,radix: 转换进制数，如2,8,10,16 进制
char* itoa(int value, char* string, int radix);

#endif
