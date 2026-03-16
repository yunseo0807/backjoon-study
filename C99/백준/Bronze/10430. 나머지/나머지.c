int main(void) {

	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (C == 0) return 0;

	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);

	return 0;
}