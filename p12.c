// WAP to find Simple Interest

int main()
{
    int p, r, t;
    float SI;
    printf("Enter the value of p,r,t:\n");
    scanf("%d%d%d", &p, &r, &t);
    SI = (p * r * t) / 100;
    printf("Simple Interest is :%f\n", SI);
    return 0;
}
/* OUTPUT:
Enter the value of p,r,t:
30
45
60
Simple Interest is :810.000000

*/