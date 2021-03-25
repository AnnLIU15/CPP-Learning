# @Author: ZhaoYang
# @Date:   2021-03-25 12:35:12
# @Last Modified by:   ZhaoYang
# @Last Modified time: 2021-03-25 12:49:34
import os
def mkdircpp(RootPath):
    for i in range(2,19):
        path=RootPath+'section'+str(i)
        if not os.path.exists(path):
            os.makedirs(path)
        for j in range(1,11):
            cppfile=path+'\\'+str(i)+'_'+str(j)+'.cpp'
            with open(cppfile,'a+') as _:
                pass
       
def main():
    print("Hello, World!")
    RootPath='C:\\Users\\zqliu\\Desktop\\c++practice\\'
    mkdircpp(RootPath)

if __name__ == "__main__":
    main()
