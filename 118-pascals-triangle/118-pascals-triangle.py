class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        output = [[1]]
        tempArr = []
        nextArr = []
        
        if(numRows==1):
            return  output
        elif(numRows==2):
            output = [[1],[1,1]]
            return  output 
        else:
            for i in range(numRows):
                k = i+1
                tempArr = []
                for j in range(k):
                    if (k == 1):
                        tempArr.append(1)
                        tempArr.append(1)
                    elif (k == 2):
                        if (j == 0):
                            tempArr.append(1)
                        elif (j == 1):
                            tempArr.append(2)
                            tempArr.append(1)
                    elif(k==3):
                        tempArr = [1,2,1]
                    else:
                        if(j==0):
                            tempArr.append(nextArr[j])
                        elif(j+1==k):
                            tempArr.append(nextArr[j-1])
                        else:
                            tempArr.append(nextArr[j-1]+nextArr[j])
                    # print("iiii",tempArr)
                nextArr = tempArr
                if(k!=3):
                    output.append(nextArr)
        
        return output
        

        