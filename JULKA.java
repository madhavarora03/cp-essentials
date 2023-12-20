// Problem: JULKA on SPOJ
// https://www.spoj.com/problems/JULKA/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

class Main {

	static void solve(BigInteger n, BigInteger k) {
		BigInteger x, y;
		x = n.subtract(k);
		x = x.divide(BigInteger.valueOf(2));
		y = x.add(k);

		System.out.println(y);
		System.out.println(x);

	}

	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);

		int t = 10;

		BigInteger n, k;

		while (t != 0) {
			n = sc.nextBigInteger();
			k = sc.nextBigInteger();
			solve(n, k);
			t--;
		}

	}
}
