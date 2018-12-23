def main():
    qnt = int(input())

    for i in range(0, qnt):
        j1 = input()
        j2 = input()

        if(j1 == "pedra"):
            if(j2 == "pedra"):
                print("Sem ganhador")
            
            if(j2 == "papel"):
                print("Jogador 1 venceu")

            if(j2 == "ataque"):
                print("Jogador 2 venceu")
        
        if(j1 == "papel"):
            if(j2 == "pedra"):
                print("Jogador 2 venceu")
            
            if(j2 == "papel"):
                print("Ambos venceram")

            if(j2 == "ataque"):
                print("Jogador 2 venceu")
        
        if(j1 == "ataque"):
            if(j2 == "pedra"):
                print("Jogador 1 venceu")
            
            if(j2 == "papel"):
                print("Jogador 1 venceu")

            if(j2 == "ataque"):
                print("Aniquilacao mutua")

if __name__ == "__main__":
    main()