#include<stdio.h>
int main()
{
	//debug与release版本运行方式会有不同
	//release版本做了优化

	//数据类型
	//类型决定了开辟内存空间的大小与看待内存空间的方式
	//整形
	char a;      //-128-127        //字符的本质是ASCII值
	   unsigned char b;
	short c;             //short，int等默认为signed
	   unsigned short d; //char是signed还是unsigned是未定义的，根据编译器
	int e; 
	   unsigned int f;
	long j; 
	   unsigned k;
	long long m;
	   unsigned long long n;
    
	//浮点型
	   float p; //单精度
	   double q;//双精度

    //构造类型
	   //数组   eg.int arr[]
	   //结构体 struct
	   //枚举   enum
	   //联合   union
     
    //指针类型
	   int* p1;
	   float* p2; 
	   char* p3;
	   void* p4;//泛型指针



	//整形存储
	// eg.21
	   //2进制  0b10101   
	   //8进制  025
	   //10进制 21
	   //16进制 0x15
	//整数的2进制的形式
	   //正数原码，反码，补码相同
	   //负数通过如下方式写出
	   //原码：直接写出
	   //反码：符号位不变，其余取反
	   //补码：反码加1
	   //整型在内存中以补码形式保存,补码与原码互相转换，运算过程相同

	//大端小端存储（与硬件有关）
	   //小端字节序存储：数据高位保存在高地址处（以字节为单位倒着存）

	   int l = 20;//int类型4字节，32位
	   //0 0000000000000000000000000010100;
    //第一位为符号位 0正 1负
	   //十六进制为 0x 00 00 00 14

	   char tmp = -100000;//char类型占一个字节，整形数据存入其中时会发生截断
	   printf("%d", tmp);//若进行计算/输出时类型不同，char会发生整型提升
	                     //整形提升规则：无符号位补0，有符号位补符号位

	   //浮点型的存储
	   //存储规则 电气电子工程师学会（IEEE）754
	   //任意一个二进制浮点数V可表示为V=(-1)^S*M*2^E
	   //S为符号位，0正 1负
	   //M为有效数字，大于等于1小于2
	   //2^E为指数位
	   float pp = 9.61512545;//由于浮点数小数部分是通过逼近得到，因此可能不精确
	   printf("%f",pp);
	   //根据IEEE754 32浮点数 最高1位为符号位，接下来8位为指数位，最后23位为有效数字
	   //有效数字M默认第一位为1，存储时舍去，读取时再加上。
	   //指数位E为无符号整数，存储时要加上一个中间值，32位为127，64位为1023
	   float ppp = 5.5;//eg.存储浮点数5.5
		   //1 10000001 01100000000000000000000
		   //0x 40b00000 又小端存储最终在内存中为
		   //0x 00 00 b0 40
	   //指数位E从内存中取出分3种：全0，全1，其他
	   //不为全0或全1时，减去中间值，有效数字M在前面添1
	   //全0，指数E=1-中间值，M还原为0.XXXXXX的小数
	   //全1，表示+-无穷大
	   
	   return 0;
}