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
    //�ص�����
   //ͨ�����ݺ���ָ�룬ʵ�����ƽṹ��ͬ���������á�                                  
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
    printf("%p", arr);//������ʵ��������Ԫ�صĵ�ַ
    //&arr����������ĵ�ַ
    int* ret[10] = { arr,arr1,arr2 };//ָ�������Ǵ��ָ�������
    ret[1][1];//ret[1]-->arr1;ģ���ά����
    int(*p)[10] = &arr;//����ָ���Ǵ�������ַ��ָ�룬����Ϊint*[10]
    int arr3[3][5] = { 0 };//��ά������������ǵ�һ�еĵ�ַ
    int(*p2)[5] = arr3;//��������ָ�����  
    //*(p2 + 1)Ϊ�ڶ��е�ַ�ȼ���arr3[1]
    //*��*(arr3+1+i)�õ�������ֵ�ȼ���arr3[1][i]
    fun(arr);
    //��չ:�������ָ�������
    int(*parr[10])[10] = { &arr,&arr1,&arr2 };
    //���鴫��
    fun(arr);//��(int *p),(int arr[])���ն���
    //����ָ�����飬(int*arr[]),(int **p)
    fun1(arr3);//��ά�����βν��գ�����ʡ���У�����ʡ����
    //eg.arr[3][5]��arr[][5]��
    fun2(arr3);//��ά�������ǵ�һ�����飬������ָ�����
    //eg.int (*p)[5]
    //ps.�����ö���ָ����ա�

    printf("%p %p", function, &function);
    //���ں�������������&����������ʾ������ַ
    int (*p1)(int) = &function;
    //����ָ�� ��������� int a=0;*p(a)���ɵ��ú���
    //�ֺ�������&����������ʾ������ַ
    //*p��p�ڵ�����ʵ���ϵȼ�
    int ret1 = p1(2);
    int ret2 = (*p1)(2);
    //ps:��p1����ʽʵ�����޹أ�****p����ɡ�
    //ͬ�����ݺ���ָ�뵽����(int(*p)(int,int))
    void (*arr4[4])(int, int) = { add,sub,mul,dev };
    //����ָ������ �洢�������ͣ�����������ͬ�ĺ����ĵ�ַ

    return 0;
}
    //qsort()����,��������������������
void qsort(
    void* base,//Ҫ�������ݵ���ʼλ��
    size_t num,//����
    size_t width,//����Ԫ�ش�С����λ���ֽڣ�
    int(*cmp)(const void* e1, const void* e2)//����ָ��-�ȽϺ���
    //void*�޾�������ָ�룬���Խ�����������ָ��
    //����ֱ�ӽ�����
)
{

}



    
    
    
    
    
    
    //ps:(*(void(*)())0)()
    //void(*signal(int ,void(*)(int)))(int)
 