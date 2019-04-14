# -*- coding: utf-8 -*-
"""
Created on Sun Apr 14 10:17:11 2019

@author:HOU
"""

def insertion_sort(nlist):
    for i in range(1,len(nlist)):
        j = i
        while j>0 and nlist[j-1]>nlist[j]:
            nlist[j],nlist[j-1] = nlist[j-1],nlist[j]
            j =j-1
            
nnlist = input("请输入需要排序的数组： ")
nlist = [int(n) for n in nnlist.split()]
insertion_sort(nlist)
print(nlist)

            
            
            
            