int main(void) {

	int n;
	int arr[7];
	int cnt = 0;

	(void)scanf("%d", &n);

	for (int i = 0; i < 7; i++) {
			arr[i] = n % 2;
			if (arr[i] == 1) cnt++;
			n = n / 2;
	}
	printf("%d", cnt);


	return 0;
}