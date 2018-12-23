def main():

    for i in range(int(input())):

        lis = []

        for j in range(int(input())):
            lis.append(list(map(int, input().split())))

            # removing first element
            lis[j].pop(0)

        for j in range(int(input())):

            op, l1, l2 = map(int, input().split())

            # Interseção
            if(op == 1):
                inte = set(lis[l1-1]) & set(lis[l2-1])
                print(len(inte))
            
            # União
            else:
                union = set(lis[l1-1]) | set(lis[l2-1])
                print(len(union))

if __name__ == "__main__":
    main()