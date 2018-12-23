def main():

    t_saq, t_blo, t_ata = 0,0,0
    a_saq, a_blo, a_ata = 0,0,0

    qnt = int(input())

    for i in range(0, qnt):

        nome = input()

        t_s, t_b, t_a = map(int, input().split())
        a_s, a_b, a_a = map(int, input().split())

        t_saq += t_s
        t_blo += t_b
        t_ata += t_a

        a_saq += a_s
        a_blo += a_b
        a_ata += a_a

    sta_s = a_saq * 100 / t_saq
    sta_b = a_blo * 100 / t_blo
    sta_a = a_ata * 100 / t_ata

    print("Pontos de Saque: %02.2f %%." %sta_s)
    print("Pontos de Bloqueio: %02.2f %%." %sta_b)
    print("Pontos de Ataque: %02.2f %%." %sta_a)

if __name__ == "__main__":
    main()