#include "discount.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*discount zero curve selection & read file*/

double* DZCurve(char FlowCcy[4], char CSACcy[4], int DiscountDate[]) {

	char* DZCurvePath1 = (char*)malloc(sizeof(char) * 50);
	char* DZCurvePath2 = (char*)malloc(sizeof(char) * 50);
	char* DZCurvePath3 = (char*)malloc(sizeof(char) * 50);
	double* DZ;
	DZ = malloc(((int)(sizeof(DiscountDate)/sizeof(DiscountDate[0]))) * sizeof * DZ);
	memset(DZ, 1, sizeof(DZ));


	strcpy(DZCurvePath1, "D:\\Users\\00591875\\Desktop\\");
	strcpy(DZCurvePath2, "D:\\Users\\00591875\\Desktop\\");
	strcpy(DZCurvePath3, "D:\\Users\\00591875\\Desktop\\");
	strcat(DZCurvePath1, FlowCcy);
	strcat(DZCurvePath1, FlowCcy);
	strcat(DZCurvePath2, CSACcy);
	strcat(DZCurvePath2, CSACcy);
	strcat(DZCurvePath3, CSACcy);
	strcat(DZCurvePath3, FlowCcy);
	strcat(DZCurvePath1, "_DZCurve.csv");
	strcat(DZCurvePath2, "_DZCurve.csv");
	strcat(DZCurvePath3, "_DZCurve.csv");


	//printf("%s\n", (DZCurvePath3);

	/*讀summit抓下來的Holiday List CSV檔*/
	FILE* fpDZCurve1 = NULL;
	fpDZCurve1 = fopen(DZCurvePath1, "r");
	FILE* fpDZCurve2 = NULL;
	fpDZCurve2 = fopen(DZCurvePath1, "r");
	FILE* fpDZCurve3 = NULL;
	fpDZCurve3 = fopen(DZCurvePath1, "r");





	int line = 0; /*行數*/
	char input[20]; /*每行字串儲存空間*/
	//	holiday = (struct Date*)malloc(2000 * sizeof(struct Date));

	/*int** h = (int**)malloc(sizeof(int*) * 300);
	for (int i = 0; i < 300; i++) {
		h[i] = (int*)calloc(3, sizeof(int));}*/

	if (fpHoliday == NULL) {
		exit(1);
	}

	//else {
		for (line = 0; line < LINE; line++) {
			fscanf(fpHoliday, "%d/%d/%d", &holiday[line].year, &holiday[line].month, &holiday[line].day);
			//printf("%d-%d-%d\n", holiday[line].year, holiday[line].month, holiday[line].day);
		}
	}



	fclose(fpDZCurve3);
	fclose(fpDZCurve2);
	fclose(fpDZCurve1);
	free(DZCurvePathPath);

	return (DZ);
}