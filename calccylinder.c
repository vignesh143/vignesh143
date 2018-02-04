void main()
{
    int r,h;
    printf("enter the value of r&h:");
    scanf("%d%d",&r,&h);
    volume(&r,&h);
}
int volume(int *n,int *v)
{
    float volume;
    volume=(3.14*(*n)*(*n)*(*v));
    printf("%f",volume);
}
