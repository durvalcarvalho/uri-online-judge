def main():
    
    x, y = map(int, input().split())

    lis = []

    for i in range(x):
        lis.append(list(map(int, input().split())))
    
    print(lis)


if __name__ == "__main__":
    main()