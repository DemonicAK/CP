
# import sys
# sys.stdout = open('output.txt', 'w')
# sys.stdin = open('input.txt', 'r')
t = int(input())
# print(t)

for _ in range(t):
    n, m = map(int, input().split())
    b = map(int, input().split())
    a = max(b)
    for _ in range(m):
        c, l, r = input().split()
        l, r = int(l), int(r)
        if l <= a <= r:
            if c == "+":
                a += 1
            else:
                a = a-1
        print(a, end=" ")
    print("\n")


# sys.stdout.close()  # Close the output file
# sys.stdin.close()   #
