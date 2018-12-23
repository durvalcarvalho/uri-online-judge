def main():
    while(True):
        try:

            xf,yf,xi,yi,vi,r1,r2=map(int,input().split())

            aux_x = xf+r1+r2

            max_range = ( (xf-aux_x)**2 ) ** (1/2)

            opo_dist = ((xi-xf)**2 + (yi-yf)**2)**(1/2)

            run_dist = 1.5 * vi

            opo_dist += run_dist

            if(max_range >= opo_dist):
                print("Y")
            
            else:
                print("N")

        except:
            break

if __name__ == "__main__":
    main()