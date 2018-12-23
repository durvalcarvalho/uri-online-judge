def main():

    renas = ["Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph" ]

    neve = list(map(int, input().split()))

    total = sum(neve) - 1
    escolhida = total % len(renas)

    print(renas[escolhida])

if __name__ == "__main__":
    main()