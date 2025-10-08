import sys
import math
from collections import defaultdict, Counter, deque
from bisect import bisect_left, bisect_right
from heapq import heappush, heappop

sys.setrecursionlimit(3 * 10**5)
# ------------------------------
# Setup for File I/O
# ------------------------------
# Uncomment for local testing
LOCAL = False
if LOCAL:
    sys.stdin = open('input.txt', 'r')
    sys.stdout = open('output.txt', 'w')

# ------------------------------
# Fast I/O helpers
# ------------------------------


def input(): return sys.stdin.readline().strip()
def I(): return int(input())
def II(): return map(int, input().split())
def LI(): return list(map(int, input().split()))
def SI(): return input().split()
def S(): return input()

# ------------------------------
# Utilities and Constants
# ------------------------------


def debug(*args):
    # print(*args, file=sys.stderr)
    pass


INF = float('inf')
MOD = 10**9 + 7
YES, NO = "YES", "NO"

# ------------------------------
# Core solve function
# ------------------------------


def solve():
    n = I()
    arr = LI()
    arr.sort()
    diff = -1
    for i in range(1, n, 2):
        diff = max(abs(arr[i]-arr[i-1]), diff)
    # Example operation
    print(diff)

# ------------------------------
# Main entry point
# ------------------------------


def main():
    t = 1
    t = I()  # Uncomment if multiple test cases
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
