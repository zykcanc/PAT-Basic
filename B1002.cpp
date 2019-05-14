#include <stdio.h>
#include <string.h>
const char num_read[10][5]={"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
int main(){
	char a[110];
	int sum=0;
	if(scanf("%s", a)){
		int len_a = strlen(a);
		for(int i=0;i<len_a;i++){
			sum += a[i] - '0';
		}
		char c_sum[5];
		sprintf(c_sum, "%d", sum);
		int len_sum = strlen(c_sum);
		for(int i=0;i<len_sum-1;i++){
			printf("%s ", num_read[c_sum[i]-'0']);
		}
	printf("%s", num_read[c_sum[len_sum-1]-'0']);		
	}
	return 0;
}
