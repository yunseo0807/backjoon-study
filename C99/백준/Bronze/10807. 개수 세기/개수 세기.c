int main(void) {
	int N, v, cnt = 0;
	int arr[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &v);

	for (int i = 0; i < N; i++) {
		if (arr[i] == v) {
			cnt++;
		}
	}

	printf("%d", cnt);
	return 0;
}