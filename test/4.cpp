#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

int main() {
	char a[1000], b[1000];
	int i = -1, max_char, status = 0;
	//����
	while (a[i] != '.') {
		i++;
		scanf("%c", &a[i]);
	}
	max_char = i;
	//��ȡ����
	for (int j = 0; j < max_char; j++) {
		b[j] = a[i - 1];
		i--;
	}
	//�ж��Ƿ����
	for (int j = 0; j < max_char; j++) {
		if (a[j] != b[j]) {
			status = 1;
			break;
		}
	}
	if (status == 0) {
		cout << "yes!";
	} else {
		cout << "no!";
	}
	return 0;
}