def merge(left,right):
    if not len(left) or not len(right):
        return left or right
    
    result = []
    i,j=0,0
    
    while(len(result) < len(left)+len(right)):
        if left[i] < right[j]:
            result.append(left[i])
            i+=1
        else:
            result.append(right[j])
            j+=1
        if i == len(left) or j == len(right):
            result.extend(left[i:] or right[j:])
            break
        
    return result



def merge_Sort(nlist):
    if len(nlist) < 2:
        return nlist
    
    mid = int(len(nlist)/2)
    left = merge_Sort(nlist[:mid])
    right = merge_Sort(nlist[mid:])
    
    return merge(left, right)

nnlist = input("请输入需要排序的数组： ")
nlist = [int(n) for n in nnlist.split()]
print(merge_Sort(nlist))
 
