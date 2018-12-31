def fibo(num):
    result1 = ((1 + 5 ** 0.5)/2)**num
    result2 = ((1 - 5 ** 0.5)/2)**num
    result3 = result1 - result2
    result4 = result3 / 5 ** 0.5

    return result4


def main():
    num = int(input())
    result = fibo(num)

    print("%.1f" % result)

if __name__ == "__main__":
    main()