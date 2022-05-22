class Solution:
    def addTwoNumbers(self, l1, l2 ) :
        d={1:'1',
           2:'2',
           3:'3',
           4:'4',
           5:'5',
           6:'6',
           7:'7',
           8:'8',
           9:'9',
           0:'0'}
        sl1,t=" "," "
        for i in l1:
            t+=d[i]
            sl1=t[::-1]
        sl2,p=" "," "
        for i in l2:
            p+=d[i]
            sl2=p[::-1]
        sum=int(sl1)+int(sl2)
        
        rel=[]
        for i in str (sum):
           rel.append(int(i)) 
        
        return rel

#print(Solution().addTwoNumbers([9,0],[8]))