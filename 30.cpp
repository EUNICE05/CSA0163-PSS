#include <stdio.h>
int main(){
	char op;
	double first,second;
	printf("enter an operator(+,-,*,/):");
	scanf("%c", &op);
	printf("enter two operands:");
	scanf("%if %lf", &first, &second);
	switch(op){
		case'+':
			printf("%.1lf + %.llf=%.lf", first, second, first+second);
			break;
			case'-':
				printf("%.1lf - %.llf=%.lf", first, second, first-second);
				break;
				case'*':
				printf("%.1lf * %.llf=%.lf", first, second, first*second);
				break;
				case'/':
				printf("%.1lf *-/ %.llf=%.lf", first, second, first/second);
				break;
				default:
					printf("error! operator is not correct");
				}
				return 0;
				
				
	}
