int main(void) {

	int arr[10][10];

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int max = arr[0][0];
	int max_r = 0;
	int max_c = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				max_r = i;
				max_c = j;
			}
		}
	}

	printf("%d\n%d %d", max, max_r+1, max_c+1);
	return 0;
}