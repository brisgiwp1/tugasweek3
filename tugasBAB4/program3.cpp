void QuickSort(array A, int L, int N)
{
	if L<N
			M:Partition(A,L,N)
			QuickSort(A,L,M-1)
			QuickSort(A,M+1,N)
	endif
}
void Partition(array A, int L, int N)
{
	select M,where L<=M<=N
		reorder A(L)..A(N) so that I<M implies A(I)<=A(M),and I>M implies
		A(I)>=A(M)
	return M
}
