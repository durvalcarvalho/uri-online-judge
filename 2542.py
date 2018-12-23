def main():

    while(True):
        try:
            qnt = int(input())

            cards_m, cards_l = map(int,input().split())
            
            deck_m = []
            deck_l = []

            for i in range(cards_m):
                deck_m.append(list(map(int, input().split())))
            
            for i in range(cards_l):
                deck_l.append(list(map(int, input().split())))
            
            choice_m, choice_l = map(int, input().split())

            choice_m -= 1
            choice_l -= 1

            rand_stat = int(input())
            rand_stat -= 1

            if(deck_m[choice_m][rand_stat] > deck_l[choice_l][rand_stat]):
                print("Marcos")
            
            elif(deck_m[choice_m][rand_stat] < deck_l[choice_l][rand_stat]):
                print("Leonardo")
            
            else:
                print("Empate")

        except:
            break

if __name__ == "__main__":
    main()