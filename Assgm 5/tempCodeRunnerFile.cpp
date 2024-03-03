
int dao_nguoc(int n)
{
    if(n/10==0) return n;
    cout<<n%10;
    return dao_nguoc(n/10);
}
int reverse(int n)
{
    if(n%10==0) return reverse(n/10);
    return dao_nguoc(n);
}