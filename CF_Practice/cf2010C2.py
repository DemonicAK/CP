def find_original_message(t):
    n = len(t)

    # Check all possible overlap lengths
    for k in range(1, n ):
        # The potential overlap part
        overlap_suffix = t[-k:]
        overlap_prefix = t[:k]

        if overlap_suffix == overlap_prefix:
            # Potential original message
            print("YES")
            s = t[:n - k]

            # Check if s concatenated with itself with this overlap produces t
            if s + s[k:] == t:
                print(s)
                return

    # If no valid overlap was found
    print("NO")


# Example usage:
# t = input().strip()
find_original_message("abcabc")
