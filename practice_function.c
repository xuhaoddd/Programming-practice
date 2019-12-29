#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

#define MAX_NUM 100


int fibonacci(int n);
int judge_digital(int n);
int plindrama(int n);
bool judge_prime(int n);
bool judge_amrstrong(int n);
int convert_binary_to_decimal(int n);
int convert_binary_to_octal(int n);
void reverse_sentence();
void remove_special_character(char*);
int calculate_string_lenth(char*);
void joseph_death_game(int*,int*);

int main(int argc, char* argv[]) {


	//  fibonacci function
	/*
	int n1;
	printf("input the number of fibonacci sequence:");
	scanf("%d",&n1);
	for(int i=1;i<=n1;i++){
		printf("%d ",fibonacci(i));
	}
	//*****************************
	*/
	int in[30];
	int out[50];
	memset(in,0,sizeof(in));
	joseph_death_game(in,out);
	for(int i=1;i<=15;++i){
		printf("%d ",out[i]);
	}
	return 0;
}

int fibonacci(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int judge_digital(int n) {
	int count = 0;
	while (n != 0) {
		n /= 10;
		count++;
	}
	return count;
}

int plindrama(int n) {
	int plindrama_num = 0;
	int reminder = 0;
	while (n != 0) {
		reminder = n % 10;
		plindrama_num = plindrama_num * 10 + reminder;
		n /= 10;
	}
	return plindrama_num;
}

bool judge_prime(int n) {

	for (int i = 2; i < n / 2; i++) {
		if (n % i == 0) {
			return 0;
			break;
		}
	}
	return 1;
}

bool judge_amrstrong(int n) {
	int amstrong_number = 0;
	int reminder[MAX_NUM];
	int tmp = n;
	int count = 0;
	while (n != 0) {
		reminder[count] = n % 10;
		count++;
		n /= 10;
	}
	for (int i = 0; i < count; i++) {
		amstrong_number += pow(reminder[i], count);
	}
	if (tmp == amstrong_number)
		return 1;
	else
		return 0;
}

int convert_binary_to_decimal(int n) {
	int reminder = 0;
	int count = 0;
	int decimal_num = 0;
	while (n != 0) {
		reminder = n % 10;
		n /= 10;
		decimal_num += reminder * pow(2, count);
		count++;
	}

	return decimal_num;
}

int convert_binary_to_octal(int binary_num) {
	int decimal_num = 0;
	int i = 1;
	int octal_num = 0;
	decimal_num = convert_binary_to_decimal(binary_num);

	while (decimal_num != 0) {
		octal_num += (decimal_num % 8) * i;
		decimal_num /= 8;
		i *= 10;
	}

	return octal_num;
}

void reverse_sentence() {
	char c;
	scanf("%c", &c);// pay attention to give &c to scanf() function

	if (c != '\n') {
		reverse_sentence();
		printf("%c", c);
	}

}

void remove_special_character(char* ch) {
	for (int i = 0; ch[i] != '\0'; i++) {
		while (!((ch[i] > 'a' && ch[i] < 'z') || (ch[i] > 'A' && ch[i] < 'Z') || ch[i] == '\0')) {
			for (int j = i; ch[j] != '\0'; j++) {
				ch[j] = ch[j + 1];
			}
		}
	}
}

int calculate_string_lenth(char* ch){
	int i;
	for(i=0;ch[i]!='\0';++i);
	return i;
}

void joseph_death_game(int* in,int* out){
	// int count=0;
	// while(count!=15){
		// count++;
		// for(int i=1;i<=30-count;i++){
			// if(i%9==0){
				// out[count]=in[i];
				// for(int j=i;j<30;j++){
					// in[j]=in[j+1];
				// }
			// }
		// }
	// }
	int count=0;
	int j=0
	int i=1;
	while(count!=15){
		count++;
		if(i==31)
			i=1;
		else{
			while(i!=30){
				while(j!=9){
					if(in[i]==0){
						j++;
					}
				}
				
				j=0;
				out[count]=i;
				i++;
			}
		}
	}
}
