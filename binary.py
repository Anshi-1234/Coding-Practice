def find_minimum_energy_level(N, X, energy_levels):
    energy_levels.sort()
    low = 0
    high = energy_levels[-1]
    result = -1

    while low <= high:
        mid = (low + high) // 2
        count = 0
        i = N - 1

        while i >= 0 and energy_levels[i] >= mid:
            count += 1
            i -= 1
            
        if count == X:
         return mid
        
        if count >= X:
            low = mid + 1
            result = mid
            
        else:
            high = mid - 1

    
    return -1

# Read the input
N, X = map(int, input().split())
energy_levels = list(map(int, input().split()))

# Call the function to find the minimum energy level
result = find_minimum_energy_level(N, X, energy_levels)

# Print the result
print(result)
