def insertion_sort(a_list):
    for index in range(1,len(a_list)):
        current_value = a_list[index]
        position = index
        
        while position > 0 and a_list[position-1] > current_value:
            a_list[position] = a_list[position-1]
            position = position -1
            
        a_list[position] = current_value
        
list = [1,2,3,7,10,100,304,900]
print(list)
insertion_sort(list)
print(list)




