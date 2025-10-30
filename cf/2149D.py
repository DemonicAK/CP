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


def min_swaps_to_cluster(s: str) -> int:
    def cost_to_cluster(s, ch):
        # Get positions of ch
        positions = [i for i, c in enumerate(s) if c == ch]
        m = len(positions)
        if m == 0:  # No such character
            return float('inf')

        # Compute bi = pi - i
        b = [positions[i] - i for i in range(m)]

        # Find median of b
        b.sort()
        median = b[m // 2] if m % 2 == 1 else (b[m // 2 - 1] + b[m // 2]) / 2

        # Compute total cost
        return sum(abs(x - median) for x in b)

    return int(min(cost_to_cluster(s, 'a'), cost_to_cluster(s, 'b')))


def solve():
    n = I()
    mystr = S()

    print(min_swaps_to_cluster(mystr))

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
