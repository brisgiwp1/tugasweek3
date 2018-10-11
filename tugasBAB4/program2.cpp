void SelectionSort(int Array[], const int Size){
	int i,j,smallest,temp;
	for(i=0;i<Size;i++)
	{
		smallest=i;
		for(j=i;j<Size;j++)			{
			if(Array[smallest]>Array[j])
			{
			smallest=j;
			}
		}
		temp=Array[i];
		Array[i]=Array[smallest];
		Array[smallest]=temp;
	}
	return;

}
