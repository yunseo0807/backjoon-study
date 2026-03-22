int main() {
	int N = 9;
	int arr[10];
	for (int i = 1; i <= N; i++) {
		(void)scanf("%d", &arr[i]);
	}
	
	int max = arr[1];
	int max_i = 1;

	for (int i = 1; i <= N; i++) {
		if (max < arr[i]) {
			max = arr[i];
			max_i = i;
		}
	}
	
	printf("%d\n%d", max, max_i);

}