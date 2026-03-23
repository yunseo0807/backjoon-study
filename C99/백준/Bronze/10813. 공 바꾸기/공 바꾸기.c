#define MAX 100;
int main() {

	int N, M;
	int arr[100] = { 0 };
	int b1, b2;
	(void)scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}
	for (int i = 1; i <= M; i++) {
		(void)scanf("%d %d", &b1, &b2);
		int temp = arr[b1];
		arr[b1] = arr[b2];
		arr[b2] = temp;
	}
	for (int i = 1; i <= N; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}