#include <stdio.h>

/*
  d : ��ȣ�� �ִ� 10���� ���� (char, short, int �迭)
  ld: long
 lld: long long
  u : ��ȣ ���� 10���� ���� (unsigned int, unsigned short, unsigned char)
  f : float, double
 lf : long double
 */
void main(){
		int int_max=2147483647;
		int int_max_test=2147483648;
		signed int sint_max1=2147483647;
		unsigned int uint_max2=4294967295;
		unsigned short ushort_max3=65535;
		unsigned char uchar_max4=255;
		char char_max5=127;
		short short_max6=32767;
		long long_max7=2147483647;
		unsigned long ulong_max8=2147483647;
		long long long_long_max9=9223372036854775807;
		float float_max10=3.1415927;
		double double_max11=3.141592789112345;
		long double long_double_max12=3.141592789112345;

		printf("int �ִ밪 : %d\n", int_max);

		// visual studio 2019 �����Ϸ����� int�� 4byte�� ó���ϱ� ������
		// int Ÿ�����δ� 2,147,483,647 �̻��� ���� ǥ���� �� ����.
		printf("int_max + 1 : %d\n", int_max_test);
		printf("signed int �ִ밪 : %d\n",sint_max1);
		printf("unsigned int �ִ밪 : %u\n",uint_max2);
		printf("unsigned short �ִ밪 : %u\n",ushort_max3);
		printf("unsigned char �ִ밪 : %u\n",uchar_max4);
		printf("char �ִ밪 : %d\n",char_max5);
		printf("short �ִ밪 : %d\n",short_max6);
		printf("long �ִ밪 : %ld\n",long_max7);
		printf("unsigned long �ִ밪 : %ld\n",ulong_max8);
		printf("long long �ִ밪 : %lld\n",long_long_max9);
		printf("float �ִ밪 : %f\n",float_max10);
		printf("double �ִ밪 : %f\n",double_max11);
		printf("long double �ִ밪 : %lf\n",long_double_max12);
}
