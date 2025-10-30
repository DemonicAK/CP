#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, x[100011], y[100011], xs, ys, xt, yt;
ll dis(int x1, int y1, int x2, int y2)
{
    return 1ll * (x2 - x1) * (x2 - x1) + 1ll * (y2 - y1) * (y2 - y1);
}
int main()
{
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);

        for (int i = 1; i <= n; ++i)
            scanf("%d%d", x + i, y + i);

        scanf("%d%d%d%d", &xs, &ys, &xt, &yt);
        bool ok = 1;

        for (int i = 1; i <= n; ++i)
        {
            if (dis(xt, yt, x[i], y[i]) <= dis(xt, yt, xs, ys))
            {
                ok = 0;
                break;
            }
        }

        printf(ok ? "YES\n" : "NO\n");
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}