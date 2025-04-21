class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        else:
            return "Stack is empty"

    def is_empty(self):
        return len(self.items) == 0

    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        else:
            return "Stack is empty"
        
    def size(self):
        return len(self.items)
    
    def pop_all(self):
        self.items.clear()
    
    def parentheses_check(exp):
       
        Parentheses_set1 = "({[" 
        Parentheses_set2 = ")}]"
        matching = {')':'(', '{' : '}', '[' : ']'}
        for char in exp:
            if char in Parentheses_set1:
                exp.append(char)
            elif char in Parentheses_set2:
                if not exp or exp[-1] != matching[char]:
                    return False
                exp.pop
        return not exp
    
    exp ="({[]})"
    if parentheses_check(exp):
        print("괄호 짝지어져 있음")
    else:
        print("괄호 짝지어져있지 않음")