def main():
    val = input()

    a = [int(i) for i in val]

    if(a.count(1) % 2):
        a.append(1)
    else:
        a.append(0)

    for b in a:
        print(b, end="")
    
    print()

if __name__ == "__main__":
    main()