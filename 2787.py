def main():
    qnt_l = int(input())
    qnt_c = int(input())

    # impar
    if(qnt_l%2):
        if(qnt_c%2):
            print("1")
        else:
            print("0")
    else:
        if(qnt_c%2):
            print("0")
        else:
            print("1")

if __name__ == "__main__":
    main()