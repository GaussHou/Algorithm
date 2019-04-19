# -*- coding: utf-8 -*-
"""
Created on Fri Apr 19 10:21:53 2019

@author: Administrator
"""

from random import randint

def Quick_Sort(nlist,start,end):
    if start < end:
        pivot = randint(start,end)
        nlist[end],nlist[pivot]=nlist[pivot],nlist[end]
        split=partition(nlist,start,end)
        Quick_Sort(nlist,start,split-1)
        Quick_Sort(nlist,split+1,end)


def partition(nlist,start,end):
    pivot_index = start-1
    for index in range(start,end):
        if nlist[index] < nlist[end]:
            pivot_index = pivot_index+1
            nlist[pivot_index],nlist[index]=nlist[index],nlist[pivot_index]
    nlist[pivot_index+1],nlist[end]=nlist[end],nlist[pivot_index+1]
    
    return pivot_index+1


nnlist=input("请输入数组： ")
nlist = [int(n) for n in nnlist.split()]
Quick_Sort(nlist,0,len(nlist)-1)
print(nlist)

