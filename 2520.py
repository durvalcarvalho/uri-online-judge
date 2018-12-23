def main():
    while(True):
        try:
            x,y = map(int,input().split())

            city = []

            for i in range(x):
                city.append(list(map(int, input().split())))

                for j in range(y):
                    if city[i][j] == 1:
                        t_x = i
                        t_y = j
                    
                    if city[i][j] == 2:
                        p_x = i
                        p_y = j
            
            total = abs(t_x - p_x) + abs(t_y - p_y)
            
            print(total)
                    
        except:
            break

if __name__ == "__main__":
    main()