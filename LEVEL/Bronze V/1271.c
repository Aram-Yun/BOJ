/* 실험중. 실행 결과값
150-2-1
00010
15079

tlqkf 이게 왜 브론즈5야 지랄하지마라고 해 제발

배열에서 나눗셈 할 방법 구현하기 tlqkf tlqkf
*/



#include <stdio.h>
#define max 5
int dis = -1;

void push(int arr[], int a) {
	int tmp1 = 0, tmp2 = 0;
	for(int i = 0; i <= a; i++) {
		if(i == 0) {
			tmp2 = arr[a];
		}
		tmp1 = arr[i];
		arr[i] = tmp2;
		tmp2 = tmp1;
	}
}

void pull(int arr[], int a) {
	int tmp1 = 0, tmp2 = 0;
	for(int i = a; i >= 0; i--) {
		if(i == a) {
			tmp2 = arr[0];
		}
		tmp1 = arr[i];
		arr[i] = tmp2;
		tmp2 = tmp1;
	}
}

void arrange(int arr[], int a) {
	for(int i = a; i >= 0; i--) {
		if(arr[a] == -1) {
			push(arr, a);
		}
	}
}

void arrange2(int arr[], int a) {
	for(int i = 0; i <= a; i++) {
		if(arr[0] == -1) {
			pull(arr, a);
		}
	}
}

void distract(int n[], int m[], int a[]) {
	int cnt = 0, cnt2 = 0;
	for(int i = max; i >= 0; i--) {
		if(n[i] == -1 && cnt2 == 0) {
			continue;
		}
		else if(m[i] == -1 && cnt == 0) {
			arrange(m, i);
			cnt++;
		}
		else if(m[i] == -1 && cnt != 0) {
			for(int j = i; j >= 0; j--) {
				m[j] = 0;
			}
		}
		else if(n[i] == -1 && cnt2 != 0) {
			n[(i - 1)]--;
			n[i] += 10;
		}
		a[i] = n[i] - (m[i]);
		cnt2++;
		if(a[i] < 0) {
			a[i] += 10;
			n[(i - 1)]--;
		}
	}
}

int compare(int one[], int two[]) {
	int cnt = 0;
	for(int i = max - 1; i >= 0; i--) {
		if(one[i] == -1) {
			continue;
		}
		else if(two[i] == -1 && cnt == 0) {
			arrange(two, i);
			cnt++;
		}
		else if(one[i] == -1) {
			if(two[i] == -1) {
				continue;
			}
			else {
				return 2;
			}
		}
		else if(two[i] == -1) {
			if(one != -1) {
				return 1;
			}
		}
	}
	for(int i = 0; i < max; i++) {
		if(one[i] > two[i]) {
			return 1;
		}
		else if(one[i] == two[i]) {
			continue;
		}
		else {
			return 2;
		}
	}
	return 0;
}

int divide(int n[], int m[], int a[]) {
  int cnt = 0;
  int quotient[max] = {0, };
  distract(n, m, a);
  for(int i = 0; i < max; i++) {
  		quotient[i] = -1;
  	}
  while(1) {
  	distract(n, m, a);
	if(compare(a, m) == 2) {
		printf("\nworked!\n");
		break;
	}
    for(int i = 0; i < max - 1; i++) {
    	n[i] = a[i];
    }
    for(int i = 0; i < 5; i++) {
    	printf("%d", a[i]);
    }
    printf("\n");
    cnt++;
  }
  return (compare(a, m));
}

int main(void) {
	int n[5] = {1, 5, 1, -1, -1};
	int m[5] = {1, 0, -1, -1, -1};
	int ans[5] = {-1, -1, -1, -1, -1};
	distract(n, m, ans);
	for(int i = 0; i < 5; i++) {
		printf("%d", n[i]);
	}
	printf("\n");
	for(int i = 0; i < 5; i++) {
		printf("%d", m[i]);
	}
	printf("\n");
	for(int i = 0; i < 5; i++) {
		printf("%d", ans[i]);
	}
	
	
	return 0;
}

// 파이썬 기준 브5였음ㅋㅋ