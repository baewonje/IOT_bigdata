#include <stdio.h>
#pragma warning (disable:4996)

// �Ʒ��� �迭�� �������� ����Ǿ����Ƿ� �ڵ� 0���� �ʱ�ȭ
int record[5][5];		// �л����� ������ �����ϱ� ���� �迭

/* �л��� ������ �Է� */
void writerecord(void) {
	int sum;		//�л��� ���� �հ�
	int i, j;
	for (i = 0; i < 4; i++) {
		sum = 0;
		printf("%d��° �л��� ���� �Է� \n", i + 1);
		for (j = 0; j < 4; j++) {
			printf("���� %d: ", j + 1);
			scanf("%d", &record[i][j]);
			sum += record[i][j];
		}
				record[i][4] = sum;

		}
	}
/* ���� ������ �հ� �Է� */
void writesumrecord(void) {
	int sum = 0; // ���� ���� �հ�
	int i, j;

	for (i = 0; i < 4; i++) {
		sum = 0;
		for (j = 0; j < 4; j++)
			sum += record[j][i];
		record[4][i] = sum;
		record[4][4] += sum;
	}
}
			
		/*��޿� ����� �� ��ü ��� */
void showallrecord(void) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%3d ", record[i][j]);
			printf("\n");
	}
}

int main(void){
	writerecord();
	writesumrecord();
	showallrecord();
}

