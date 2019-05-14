#include <stdio.h>
#include <string.h>
int not_pat(char str1[50]){
	int len_c = strlen(str1);
	for(int i=0;i<len_c;i++){
		if(str1[i]!= 'P'){
			if(str1[i]!= 'A'){
				if(str1[i]!= 'T'){
					return 0;
				}
			}
		}
	}
	return 1;
}

int have_pat(char str1[50]){
	int len_c = strlen(str1), p=0, a=0, t=0;
	for(int i=0;i<len_c;i++){
		if(str1[i] == 'P'){
			p++;
		}
		if(str1[i] == 'A'){
			a++;
		}
		if(str1[i] == 'T'){
			t++;
		}
	}
	if(p>0 && a>0 &&t>0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int len=0, len_str=0;
	scanf("%d", &len); 
	for(int i=0;i<len;i++){
		char str[50];
		if(scanf("%s", str)){
			if(not_pat(str)){
				if(have_pat(str)){
					int j=0,l_a=0,l_b=0,l_c=0;
					len_str = strlen(str);
					while(str[j] != 'P'){
						l_a++;
						j++;
					}
					j++;
					while(str[j] != 'T'){
						l_b++;
						j++;
					}
					j++;
					while(j<len_str){
						l_c++;
						j++;
					}
					if(l_c == l_a * l_b){
						printf("YES\n");
					}else{
						printf("NO\n");
					}
				}else{
					printf("NO\n");
				}
			}else{
				printf("NO\n");
			}
		}
	}
	return 0;
}
//不知道为什么在测试点5出现了运行时错误的问题。目前不知道怎么解决。
