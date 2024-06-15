inv = {'N': 'S', 'S': 'N',
       'E': 'W', 'W': 'E'}


def solve():
    n = int(input())
    s = input()
    x, y = 0, 0
    for c in s:
        if c == 'N':
            y += 1
        if c == 'S':
            y -= 1
        if c == 'E':
            x += 1
        if c == 'W':
            x -= 1
    if x % 2 == 1 or y % 2 == 1:
        print('NO')
        return
    ans = ['R'] * n
    if x == y == 0:
        if n == 2:
            print('NO')
            return
        ans[0] = ans[s.find(inv[s[0]])] = 'H'
    else:
        for i in range(n):
            if s[i] == 'N' and y > 0:
                y -= 2
                ans[i] = 'H'
            if s[i] == 'S' and y < 0:
                y += 2
                ans[i] = 'H'
            if s[i] == 'E' and x > 0:
                x -= 2
                ans[i] = 'H'
            if s[i] == 'W' and x < 0:
                x += 2
                ans[i] = 'H'
    print(*ans, sep='')


for _ in range(int(input())):
    solve()
