int main()
{
    int n, i, resul = 1;
    scanf("%d", &n);
    int dis[n];
    for(i=0; i<n; i++)
        scanf("%d", &dis[i]);
    if(n==2 && dis[0]==dis[1]) resul = 0;
    else
    {
        for(i=2; i<n; i++)
        {
            if(dis[i] >= dis[i-1] && dis[i-1] >= dis[i-2])
            {
                resul = 0;
                break;
            }
            else if(dis[i] <= dis[i-1] && dis[i-1] <= dis[i-2])
            {
                resul = 0;
                break;
            }
        }
    }
    printf((resul==1)?"1\n":"0\n");
    return 0;
}
