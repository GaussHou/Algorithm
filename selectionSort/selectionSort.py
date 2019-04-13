# -*- coding: utf-8 -*-
"""
Created on Sat Apr 13 10:28:54 2019

@author: HOU
"""

def selection_sort(nlist):
    for k in range(len(nlist)):
        min_index = k
        for j in range(k+1,len(nlist)):
            if nlist[j] < nlist[min_index]:
                min_index = j
        nlist[k], nlist[min_index] = nlist[min_index], nlist[k]
        
nnlist = input("请输入需要排序的数组： ")
nlist = [int(n) for n in nnlist.split()]
selection_sort(nlist)
print(nlist)