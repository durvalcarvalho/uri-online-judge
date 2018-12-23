def main():

    lis = set()

    while(True):
            gem = input()

            if(gem != ""):
                lis.add(gem)

            else:
                print(len(lis))
                break

if __name__ == "__main__":
    main()