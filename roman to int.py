def roman_to_int(str):
    d= {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000,
        }
    t=0
    pre=1001
    #cur=0
    
    for i in str:
        cur=d[i]
        
        if pre<cur:
            t-=pre*2
        t+=cur
        pre=cur
    return t
print(roman_to_int('XL'))
        
        