#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i = 0;
	//字符串函数
	char arr[] = "abcdef" ;
	char arr1[] = "abcdefg";
	strlen(arr);//strlen函数，返回\0前字符个数
	//返回值为size_t，无符号unsigned int.
	if (strlen("abc") - strlen("abcdef") > 0)//错误用法
	{
		printf("%d", 1);
	}//由于strlen返回值为unsigned int,负数会溢出到很大的正数
	  
	strcpy(arr, "trcmaster");//strcpy函数,将原字符串拷贝到目标空间，返回目标空间的起始地址
	//源字符串需以\0结尾，且会将\0拷贝到目标空间
	//若无\0结尾会继续拷贝下去，可能造成越界。
	//目标空间需要足够放下字符串
	const char* p = "abcdef";
	//strcpy(p, arr);目标空间必须可变，不能用于常量字符串

	strcat(arr, "abc");//strcat函数，字符串追加
	strcat(arr, arr);//错误用法，不能追加自身
	//源字符串需以\0结尾,目标空间需要足够放下字符串

	strcmp(arr, arr1);//strcmp函数，比较字符串
	//逐个比较ascii值，返回>0,=0,<0的整数

	strcpy,strcat,strcmp;//长度不受限的字符串函数
	strncpy, strncat, strncmp;//长度受限
	strncpy(arr,"abcdef", 5);//补充长度限制，不足时会补足
	//注，strncat函数在末尾依然会补上\0
	strstr(arr, "abc");//strstr函数,查找字符串
	//若找到，返回原字符串；若没找到，返回NULL
	//拓展：kmp算法
	size_t n = 0;
	const char* sep = "abc";
	char* str = arr;
	strtok(str,sep);//strtok函数，切割字符串
	//sep是用作分隔符的字符集
	//str为包含了0个或多个由sep中的一个或多个分隔符分割的标记的字符串
	//strtok函数找到str中下一个标记，并将其用\0结尾，返回指向这一标记的指针
	//注意：strtok函数会改变字符串本身的内容，一般建议使用副本
	//str第一个参数不为NULL，找到str中第一个标记，保存其位置
	//若为空指针，从被保存位置开始找下一个标记
	//若不存在更多标记，返回NULL
	char* ret = NULL;
	for (ret = strtok(str, sep); ret != NULL; ret = strtok(NULL, sep))//案例
	{ }
	

	strerror(0);//strerror函数，返回错误信息
	//c语言的库函数，执行失败时会设置错误码 0 1 2 3 4 5 6 7 8
	//errno 是c语言设置的一个全局错误码存放的常量
	FILE* p = fopen("test.txt", "r");
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}

	//字符分类函数
	iscntrl(i);//控制字符
	 isspace(i);//空白字符，包括" ",换行\n,换页\f,回车\r,制表符\t,垂直制表符\v
	  isdigit(i);//十进制数字
	   isxdigit(i);//十六进制数字
	  islower(i);//小写字母
	 isupper(i);//大写字母
	isalpha(i);//字母
	 isalnum(i);//字母或数字
	  ispunct(i);//标点符号,不属于字母或数字的图形字符
	   isgraph(i);//图形字符
	  isprint(i);//可打印字符
	 tolower(i);//大写字母转为小写，其余不变
	toupper(i);//小写字母转为大写，其余不变
	//
	

    
	return 0;
}