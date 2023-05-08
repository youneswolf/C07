int ft_ultimate_range(int **range, int min, int max){
    int a=max-min;
    int *s;
    int i=0;
    int numb=min;
	s=malloc(a*sizeof(int));
	
	while(numb<max){
	s[i]=numb;
	numb++;
	i++;
	}
	*range=s;
	return a;
    
}
int main() {
    int *tab;
    int a;
    int i=0;
    a=ft_ultimate_range(&tab,2,8);
    while(i<6){
        printf("%d",tab[i]);
        i++;
    }

    return 0;
}
