#ifndef __SUT_H__
#define __SUT_H__
#include "insert_sort.h"
#include <math.h>

#define N 10

 
 typedef struct stu
    {
        int num;
        int score;
    }stu;





double fun01(double x,double y);

int fun02(int num);

void fun03(int* a,int* b);

int fun04(int a,int b);

int fun04_2(int a,int b);

float fun05(float num);

float fun11(float x,int m);

float fun11_power(float m,int n);

unsigned fun12(unsigned w);

long fun13(long s);

int fun14(int n,int k);

void fun15(int k);

float fun17(float eps);

int fun18(int m);

int len21(char* s);

int fun22(char*s,char k);

void fun24(char* s);

void fun25(char* a,char* b);

void fun26(char* p);

void fun27(char* a,char* b,char* c);

void fun4_3(char* a);

int fun4_4(char* a,char* b);

int search4_5(int *input,size_t start, size_t count,int x);

int *fun4_6(char *st, int a[3]);

void fun5_2(int aa[],int x,int* n);

void fun5_3(int* a,int* b);

int fun5_4(int lim,int aa[100]);

int fun6_1(int *input,size_t start, size_t count,int x);

void fun6_2(int n);

void fun6_3(int x);

int fun6_4(struct stu* s,struct stu* h);

#endif //__SUT_H__  