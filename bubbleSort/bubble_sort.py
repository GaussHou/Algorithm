# -*- coding: utf-8 -*-
"""
Created on Mon Feb 25 10:06:29 2019

@author: HOU
"""
def bubble_sort(nlist):
    for passnum in range(len(nlist)-1,0,-1):
        for j in range(passnum):
            if nlist[j] > nlist[j+1]:
                nlist[j], nlist[j+1] = nlist[j+1], nlist[j]
                
inlist = input("请输入需要排序的数组： ")
nlist = [int(n) for n in inlist.split()]
bubble_sort(nlist)
print(nlist)