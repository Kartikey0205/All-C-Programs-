// WAP to see the use of all Relational Operators

int main()
{
    int a, b, c, d, e, f, p, q, r;
    a = 23 > 56;
    b = 23 < 56;
    c = 23 <= 56;
    d = 23 >= 56;
    e = 56 != 2;
    f = 56 > 4 > 3;
    p += 4;
    q *= 3 + 4;
    r &= 56;
    printf("Various use relation operator according to thier priority are: %d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", a, b, c, d, e, f, p, q, r);

    return 0;
}

/*OUTPUT:
Various use relation operator according to thier priority are: 0
1
1
0
1
0
1316320
322
0

*/
