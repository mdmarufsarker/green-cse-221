def meanFunc(nums):
  return sum(nums) / len(nums)

def medianFunc(nums):
  sorted(nums)
  
  n = len(nums)
  
  mid = n // 2
  
  if(n & 1):
      return nums[mid]
  else:
    median1 = nums[mid - 1]
    median2 = nums[mid]
    return (median1 + median2) / 2.0

def calculateMeanMedian(nums):
  nums.sort()
  odd_nums = []
  for num in nums:
    if num & 1:
      odd_nums.append(num)

#   print(odd_nums)

  even_nums = []
  for num in nums:
    if num % 2 == 0:
      even_nums.append(num)

#   print(even_nums)

  results = {}

  if odd_nums:
    results['odd'] = {
        'mean': meanFunc(odd_nums),
        'median': medianFunc(odd_nums)
    }
  else:
      results['odd'] = None

  if even_nums:
    results['even'] = {
        'mean': meanFunc(even_nums),
        'median': medianFunc(even_nums)
    }
  else:
      results['even'] = None

  return results

nums = [2, 1, 4, 5, 3, 6, 9, 8, 10, 7]
res = calculateMeanMedian(nums)

# print(res)
print()

if res['odd']:
  print(f"  Mean: {res['odd']['mean']}")
  print(f"  Median: {res['odd']['median']}")

if res['even']:
  print(f"  Mean: {res['even']['mean']}")
  print(f"  Median: {res['even']['median']}")