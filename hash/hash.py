# -*- coding: utf-8 -*-
"""
Created on Wed Apr 17 14:35:14 2019

@author: Administrator
"""

class hash_table:
    def __init__(self):
        self.table = [None]*127
        
        
    #hash function
    def Hash_func(self, value):
        key = 0
        for i in range(0, len(value)):
            key += ord(value[i])
        return key % 127
    
    def Insert(self, value):
        hash = self.Hash_func(value)
        if self.table[hash] is None:
            self.table[hash] = value
            
    def Search(self,value):
        hash = self.Hash_func(value)
        if self.table[hash] is None:
            return None
        else:
            return hex(id(self.table[hash]))
    
    def Remove(self,value):
        hash = self.Hash_func(value)
        if self.table[hash] is None:
            print("没有找到 value",value)
        else:
            print("这个 value",value,"被删除")
            self.table[hash] is None
            


H=hash_table()
H.Insert("A")
H.Insert("B")
H.Insert("C")

print(H.Search("C"))


