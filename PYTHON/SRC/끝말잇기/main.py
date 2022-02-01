import os
import openpyxl
from selenium import webdriver
import random
from time import sleep
#chrome selenium
exist=0
word=0
def find_naver():
    global exist,word
    options = webdriver.ChromeOptions()
    options.add_argument('headless')
    options.add_argument('window-size=1920x1080')
    options.add_argument("disable-gpu")
    driver = webdriver.Chrome("chromedriver.exe",chrome_options=options)
    url = 'https://ko.dict.naver.com/#/main'
    driver.get(url)
    driver.implicitly_wait(10)
    xpath = '//input[@id="ac_input"]'
    driver.find_element_by_xpath(xpath).send_keys(word+'\n')
    driver.implicitly_wait(10)
    xpath2 = '//div[@class="component_keyword has-saving-function"]'
    xpath3 = '//strong[@class="highlight"]'
    try:
        temp_voca = driver.find_element_by_xpath(xpath2+xpath3).text
        if word == temp_voca:
            exist=1#있는단어
        else :
            exist=0
    except Exception:
        exist=0

excel=openpyxl.load_workbook('단어장.xlsx')
wordbook = excel["단어장"]
wordbook=excel.active
duplicate=[]
alphabet_key={"가":"A","나":"B","다":"C","라":"D","마":"E","바":"F","사":"G"}
column_key={"A":0,"B":1,"C":2,"D":3,"E":4,"F":5,"G":6}
column_max=[100,43,57,19,56,40,92]
os.system("clear")
file=open('Title.txt','r',encoding='UTF-8')
Title=file.read()
sleep(1)
print(Title);sleep(1)
print('\033[34m'+"PC :" + '\033[32m' + "끝말잇기 게임을 시작합니다!");sleep(1)
print ('\033[34m' + "PC :" + '\033[32m' + "당신의 닉네임을 입력해주세요.");sleep(0.3)
name=input('\033[33m' + "USER : "+'\033[32m');sleep(0.8)
print('\033[34m' + "PC : " + '\033[33m' + name + '\033[32m' + "님 안녕하세요!");sleep(1)
print('\033[34m'+"PC :" + '\033[32m' + "누가 먼저 시작할까요? [PC: 0 / "+name+": 1]");sleep(0.8)
first=input('\033[33m' + name +" : " + '\033[32m');sleep(2)
first=int(first)
print('\033[34m'+"Start the Game!");sleep(2)
if first==0:
    column=random.randint(1,7)
    row=random.randint(2,column_max[column])
    column_key_reverse= dict(map(reversed,column_key.items()))
    column=column_key_reverse.get(str(column))
    cell=str(column)+str(row)
    word=wordbook[cell].value
    print('\033[34m'+"PC : "+ '\033[32m' + str(word))
elif first==1:
    word=input('\033[33m'+ name +" : "+ '\033[32m')
    find_naver()
    while exist==0:
        print('\033[34m' + "PC :" + '\033[32m' + "존재하지 않는 단어입니다.")
        word=input('\033[33m'+ name +" : "+ '\033[32m')
        find_naver()
def word_list_append():
    global word,dulplicate,excel,wordbook,column,alphabet_key,column_key,column_max
    ok=0
    a=word[:1]
    a=str(a)
    column=alphabet_key.get(a)
    column=str(column)
    max=column_key.get(column)
    b=max
    max=column_max[int(max)]
    for i in range(1,max):
        cell=column+str(i)
        if wordbook[cell]!=word:
            ok+=1
    if ok==max-1:
        wordbook[column+str(max+1)]=word
        column_max[b]+=1
        excel.save("단어장.xlsx")
        excel.close()
        duplicate.append(word)
def duplicate_ok():
    global word,duplicate
    max=len(duplicate)
    duplicate_o=0
    for o in range(0,max-1):
        if word!=duplicate[o]:
            duplicate_o+=1
    if duplicate_o==max:
        return 0
    else:
        return 1
ok=duplicate_ok()
if exist==1:
    if ok==0:
        word_list_append()

