int main(void) {

	char s[1000];
	int n;
	(void)scanf("%s", s);
	(void)scanf("%d", &n);

	printf("%c", s[n-1]);

	return 0;
}