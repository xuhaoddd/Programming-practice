#include <cstdio>
#include <cstring>

#define MAXN 1100

using namespace std;

int in[MAXN];

int main(int argc, char* argv[]) {
	int n, k;
	memset(in, '\0',sizeof(in));
	scanf_s("%d%d", &n, &k);
	for (int i = 2; i <= k; i++) {
		for (int j = i; j <= n; j++) {
			if (j % i == 0) {
				if (in[j] == 1)
					in[j] = 0;
				else if (in[j] == 0)
					in[j] = 1;
			}
		}
		printf("%d ", in[i]);
	}
	printf("\n");
	for (int i = 1; i <= n; i++) {
		if (in[i] == 0) {
			printf("%d ", i);
		}
	}

	return 0;

}