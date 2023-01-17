// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

 #include <cstdio>

int main(){

	float a;
	int n;

	scanf("%f", &a);
	n = a;

	if(a == n) printf("%d %d", n, n);
	else if (a > 0) printf("%d %d", n, n+1);
	else printf("%d %d", n-1, n);

	return 0;
}