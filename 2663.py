def main():
    
    qnt = int(input())
    vagas = int(input())

    lis = []
    
    for i in range(qnt):
        lis.append(int(input()))
    
    lis.sort()

    aprovados = 0

    for i in range(vagas):
        last = lis.pop()
        aprovados += 1

    while( (lis) and (lis.pop() == last) ):
        aprovados += 1

    print(aprovados)

if __name__ == "__main__":
    main()