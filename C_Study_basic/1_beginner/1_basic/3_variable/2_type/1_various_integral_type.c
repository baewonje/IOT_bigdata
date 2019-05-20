#include <stdio.h>

/*
  c : 1 byte 문자
  d : 부호가 있는 10진수 정수 (char, short, int 계열)
 hd : short
hhd : 정수형 char
  ld: long
 lld: long long
  u : 부호 없는 10진수 정수 (unsigned int, unsigned short, unsigned char)
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

		printf("int 최대값 : %d\n", int_max);

		// visual studio 2019 컴파일러에서 int를 4byte로 처리하기 때문에
		// int 타입으로는 2,147,483,647 이상의 값을 표현할 수 없다.
		printf("int_max + 1 : %d\n", int_max_test);
		printf("signed int 최대값 : %d\n",sint_max1);
		printf("unsigned int 최대값 : %u\n",uint_max2);
		printf("unsigned short 최대값 : %u\n",ushort_max3);
		printf("unsigned char 최대값 : %u\n",uchar_max4);
		printf("char 최대값 : %d\n",char_max5);
		printf("short 최대값 : %d\n",short_max6);
		printf("long 최대값 : %ld\n",long_max7);
		printf("unsigned long 최대값 : %ld\n",ulong_max8);
		printf("long long 최대값 : %lld\n",long_long_max9);
		printf("float 최대값 : %f\n",float_max10);
		printf("double 최대값 : %.15f\n",double_max11);
		printf("long double 최대값 : %.15lf\n",long_double_max12);
}
