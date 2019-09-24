import sys


def solution(nums: list, k: int):
    if len(nums) < k:
        return 0
    res = []
    sum_ = 0
    for i in range(k):
        sum_ += nums[i]

    res.append(sum_ / k)

    i = k

    while i < nums.__len__():
        sum_ -= nums[i - k]
        sum_ += nums[i]

        res.append(sum_ / k)

        i += 1

    return res


if __name__ == '__main__':
    nums = list(map(int, input().strip().split(' ')))
    k = int(input())
    res = solution(nums, k)


