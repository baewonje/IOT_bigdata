//#include <stdio.h> <== standard IO (ex: printf, scanf �� ����� �� ����.)

void main(){
		int military_serial_number = 1472004818; // military_serial_number : ����, 1472004818: ���
		int my_birth_day = 920824;
		// const�� constant(�ٲ��� ����)�� �ǹ��Ѵ�.
		const int ci_military_serial_number = 1472004818; // ci = const int �ǹ�
		const int ci_my_birth_day = 920824; // ci_my_birth_day : const

		// ���� �ٲ��� �ʰ� ������ �ϰ����ϴ� ������ �����ʹ�
		// ���� �ٲٴ� ���� ��ü�� ������ ����ų �� �ִ�.
		military_serial_number = 1474567891;
		my_birth_day = 520824;
		my_birth_day++;

		ci_military_serial_number = 1474567891;
		ci_my_birth_day = 520824;
		ci_my_birth_day++;
}
