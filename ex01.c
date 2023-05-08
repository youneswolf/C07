int	*ft_range(int min, int max){
		int *s;
		int a=(max-min)+1;
		int i=0;
		int numb=min;
		s=malloc(a*sizeof(int));
		while(numb<max){
		s[i]=numb;
		numb++;
		i++;
		}
		return (s);
		}
