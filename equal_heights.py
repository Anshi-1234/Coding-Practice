from bisect import bisect_left

# Read the input
N, M = map(int, input().split())
arr = list(map(int, input().split()))
queries = list(map(int, input().split()))

# Sort the array in ascending order
arr.sort()

# Calculate the prefix sum of the array
prefix_sum = [0]
for i in range(N):
    prefix_sum.append(prefix_sum[-1] + arr[i])

print(prefix_sum);

# Function to calculate the cost for a given query
def calculate_cost(query):
    idx = bisect_left(arr, query)
    print(idx)
    left_cost = idx * query - prefix_sum[idx]
    print(left_cost)
    right_cost = prefix_sum[-1] - prefix_sum[idx] - (N - idx) * query
    return left_cost + right_cost

# Iterate through each query
cost = [calculate_cost(query) for query in queries]

# Print the list of costs
print(*cost)
 


