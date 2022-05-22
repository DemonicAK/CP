def minion_game(string):
    # your code goes here
    s=string   
    l=len(s)
    K=[]
    S=[]
    for i in range(l):
        for j in range (i,l):
            t=s[i::]
            if t[0] in 'AEIOU':
                K+=[t]
            else:
                S+=[t]
    if len(K)>len(S):
        print('Kevin',len(K))
    else:
        print('Stuart',len(S))

if __name__ == '__main__':
    s = input()
    minion_game(s)