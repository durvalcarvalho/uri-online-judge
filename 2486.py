def main():

    tabela = {
        "suco de laranja": 120,
        "morango fresco": 85,
        "mamao": 85,
        "goiaba vermelha": 70,
        "manga": 56,
        "laranja": 50,
        "brocolis": 34 }

    while(True):

        qnt = int(input())
        
        if(qnt==0):
            break

        vitC = 0

        for i in range(qnt):
            lis = list(input().split(" ", 1))
            
            vitC += tabela[lis[1]] * int(lis[0])
        
        if(vitC < 110):
            print("Mais", 110 - vitC, "mg")
        
        elif(vitC > 130):
            print("Menos", vitC - 130, "mg")

        else:
            print(vitC, "mg")
        

if __name__ == "__main__":
    main()