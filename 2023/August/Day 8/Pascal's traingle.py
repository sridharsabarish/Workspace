# Leet code Practice : Pascal's Traingle with DP
m={}
MAXIMUM_ROW=25
def pascal(row,column):
    if column == 0:
        return 1
    return column if row == 0 else (row * pascal(row-1, column-1)) / column
for row in range(MAXIMUM_ROW):
    l = [pascal(row,j) for j in range(0,row+1)]
    print("Row  ",row," : ",l)