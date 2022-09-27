<script>
/* A Naive recursive implementation of LCS problem in java*/

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
function lcs( X, Y , m , n )
{
	if (m == 0 || n == 0)
	return 0;
	if (X[m-1] == Y[n-1])
	return 1 + lcs(X, Y, m-1, n-1);
	else
	return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}

/* Utility function to get max of 2 integers */
function max(a , b)
{
	return (a > b)? a : b;
}



	var s1 = "AGGTAB";
	var s2 = "GXTXAYB";

	var X=s1;
	var Y=s2;
	var m = X.length;
	var n = Y.length;

	document.write("Length of LCS is" + " " +
								lcs( X, Y, m, n ) );

</script>
