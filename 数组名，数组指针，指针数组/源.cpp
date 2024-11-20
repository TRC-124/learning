#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

#include<math.h>

void fun(int arr[10])
{
    arr[2] = 1;

}
void fun1(int arr[3][5])
{
    arr[1][1] = 1;
}
void fun2(int(*p)[5])
{

}
int cal(void(*)(int a, int b))
{
    //回调函数
   //通过传递函数指针，实现相似结构不同函数的作用。                                  
}
int function(int a)
{

    return 0;
}
void add(int,int)
{}
void sub(int, int)
{}
void mul(int, int)
{}
void dev(int, int)
{}
int main()
{
    int n = 0; int i = 0; int j = 0;
    int arr[10] = { 0 };
    int arr1[10] = { 0 };
    int arr2[10] = { 0 };
    printf("%p", arr);//数组名实质上是首元素的地址
    //&arr是整个数组的地址
    int* ret[10] = { arr,arr1,arr2 };//指针数组是存放指针的数组
    ret[1][1];//ret[1]-->arr1;模拟二维数组
    int(*p)[10] = &arr;//数组指针是存放数组地址的指针，类型为int*[10]
    int arr3[3][5] = { 0 };//二维数组的数组名是第一行的地址
    int(*p2)[5] = arr3;//利用数组指针接收  
    //*(p2 + 1)为第二行地址等价于arr3[1]
    //*（*(arr3+1+i)得到具体数值等价于arr3[1][i]
    fun(arr);
    //拓展:存放数组指针的数组
    int(*parr[10])[10] = { &arr,&arr1,&arr2 };
    //数组传参
    fun(arr);//用(int *p),(int arr[])接收都行
    //对于指针数组，(int*arr[]),(int **p)
    fun1(arr3);//二维数组形参接收，可以省略行，不能省略列
    //eg.arr[3][5]或arr[][5]。
    fun2(arr3);//二维数组名是第一行数组，用数组指针接收
    //eg.int (*p)[5]
    //ps.不能用二级指针接收。

    printf("%p %p", function, &function);
    //对于函数，函数名与&函数名都表示函数地址
    int (*p1)(int) = &function;
    //函数指针 对其解引用 int a=0;*p(a)即可调用函数
    //又函数名与&函数名都表示函数地址
    //*p与p在调用上实际上等价
    int ret1 = p1(2);
    int ret2 = (*p1)(2);
    //ps:与p1的形式实际上无关（****p）亦可。
    //同样传递函数指针到函数(int(*p)(int,int))
    void (*arr4[4])(int, int) = { add,sub,mul,dev };
    //函数指针数组 存储返回类型，参数类型相同的函数的地址

    return 0;
}
    //qsort()函数,可以排序任意类型数据
void qsort(
    void* base,//要排序数据的起始位置
    size_t num,//数量
    size_t width,//数据元素大小（单位：字节）
    int(*cmp)(const void* e1, const void* e2)//函数指针-比较函数
    //void*无具体类型指针，可以接收任意类型指针
    //不能直接解引用
)
{

}



    
    
    
    
    
    
    //ps:(*(void(*)())0)()
    //void(*signal(int ,void(*)(int)))(int)
 