#include <stdio.h>
#include <stdlib.h>
#include "Calcarea.h"

int main(){
	double(*func[3])() = { triangle, trapezoid, circle };
	char ret[8];
	int funcNo;

	while (1){
		printf("Which figure you want calcrate area?\n"
			"1: triangle 2: trapezoid 3: circle 4: exit\n");
		gets_s(ret);
		if (ret[0]<'0' || ret[0] > '3'){
			printf("番号が不正です。\n");
			continue;
		}
		ret[1] = '\0';
		funcNo = atoi(ret);
		if (funcNo == 0){
			break;
		}
		double area = func[funcNo - 1]();
		printf("面積は%fです。\n", area);
	}
		return 0;
}