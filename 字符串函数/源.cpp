#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i = 0;
	//�ַ�������
	char arr[] = "abcdef" ;
	char arr1[] = "abcdefg";
	strlen(arr);//strlen����������\0ǰ�ַ�����
	//����ֵΪsize_t���޷���unsigned int.
	if (strlen("abc") - strlen("abcdef") > 0)//�����÷�
	{
		printf("%d", 1);
	}//����strlen����ֵΪunsigned int,������������ܴ������
	  
	strcpy(arr, "trcmaster");//strcpy����,��ԭ�ַ���������Ŀ��ռ䣬����Ŀ��ռ����ʼ��ַ
	//Դ�ַ�������\0��β���һὫ\0������Ŀ��ռ�
	//����\0��β�����������ȥ���������Խ�硣
	//Ŀ��ռ���Ҫ�㹻�����ַ���
	const char* p = "abcdef";
	//strcpy(p, arr);Ŀ��ռ����ɱ䣬�������ڳ����ַ���

	strcat(arr, "abc");//strcat�������ַ���׷��
	strcat(arr, arr);//�����÷�������׷������
	//Դ�ַ�������\0��β,Ŀ��ռ���Ҫ�㹻�����ַ���

	strcmp(arr, arr1);//strcmp�������Ƚ��ַ���
	//����Ƚ�asciiֵ������>0,=0,<0������

	strcpy,strcat,strcmp;//���Ȳ����޵��ַ�������
	strncpy, strncat, strncmp;//��������
	strncpy(arr,"abcdef", 5);//���䳤�����ƣ�����ʱ�Ჹ��
	//ע��strncat������ĩβ��Ȼ�Ჹ��\0
	strstr(arr, "abc");//strstr����,�����ַ���
	//���ҵ�������ԭ�ַ�������û�ҵ�������NULL
	//��չ��kmp�㷨
	size_t n = 0;
	const char* sep = "abc";
	char* str = arr;
	strtok(str,sep);//strtok�������и��ַ���
	//sep�������ָ������ַ���
	//strΪ������0��������sep�е�һ�������ָ����ָ�ı�ǵ��ַ���
	//strtok�����ҵ�str����һ����ǣ���������\0��β������ָ����һ��ǵ�ָ��
	//ע�⣺strtok������ı��ַ�����������ݣ�һ�㽨��ʹ�ø���
	//str��һ��������ΪNULL���ҵ�str�е�һ����ǣ�������λ��
	//��Ϊ��ָ�룬�ӱ�����λ�ÿ�ʼ����һ�����
	//�������ڸ����ǣ�����NULL
	char* ret = NULL;
	for (ret = strtok(str, sep); ret != NULL; ret = strtok(NULL, sep))//����
	{ }
	

	strerror(0);//strerror���������ش�����Ϣ
	//c���ԵĿ⺯����ִ��ʧ��ʱ�����ô����� 0 1 2 3 4 5 6 7 8
	//errno ��c�������õ�һ��ȫ�ִ������ŵĳ���
	FILE* p = fopen("test.txt", "r");
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}

	//�ַ����ຯ��
	iscntrl(i);//�����ַ�
	 isspace(i);//�հ��ַ�������" ",����\n,��ҳ\f,�س�\r,�Ʊ��\t,��ֱ�Ʊ��\v
	  isdigit(i);//ʮ��������
	   isxdigit(i);//ʮ����������
	  islower(i);//Сд��ĸ
	 isupper(i);//��д��ĸ
	isalpha(i);//��ĸ
	 isalnum(i);//��ĸ������
	  ispunct(i);//������,��������ĸ�����ֵ�ͼ���ַ�
	   isgraph(i);//ͼ���ַ�
	  isprint(i);//�ɴ�ӡ�ַ�
	 tolower(i);//��д��ĸתΪСд�����಻��
	toupper(i);//Сд��ĸתΪ��д�����಻��
	//
	

    
	return 0;
}