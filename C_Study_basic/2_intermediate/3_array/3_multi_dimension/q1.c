#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		int mean=0, i, j, l;
		int record[3][3][2]={
				{
						{70, 80},
						{94, 90},
						{70, 85}
				},
				{
						{83, 90},
						{95, 60},
						{90, 82}
				},
				{
						{98, 89},
						{99, 94},
						{91, 87}
				}
		};
		
		for(l=0;l<3; l++){
			for(i=0; i<3; i++)
				for(j=0; j<2; j++)
					mean += record[l][i][j];
			
		printf("A �б� ��ü ���: %g \n", (double)mean/6);
		mean=0;
		}

}

