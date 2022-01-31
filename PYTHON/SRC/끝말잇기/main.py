import os
import openpyxl
from selenium import webdriver
import random
from time import sleep
#chrome selenium
driver = webdriver.Chrome("chromedriver.exe")
def find_naver(voca):
    url = 'https://ko.dict.naver.com/#/main'
    driver.get(url)
    driver.implicitly_wait(10)
    xpath = '//input[@id="ac_input"]'
    driver.find_element_by_xpath(xpath).send_keys(voca+'\n')
    driver.implicitly_wait(10)
    xpath2 = '//div[@class="component_keyword has-saving-function"]'
    xpath3 = '//strong[@class="highlight"]'
    try:
        temp_voca = driver.find_element_by_xpath(xpath2+xpath3).text
        if voca == temp_voca:
            return 1#있는단어
        else :
            return 0
    except Exception:
        return 0

excel=openpyxl.load_workbook('단어장.xlsx')
wordbook = excel["단어장"]
duplicate=excel["중복"]
duplicate_row=1
alphabet_key={"가":"A","나":"B","다":"C","라":"D","마":"E","바":"F","사":"G"}
column_key={"A":"1","B":"2","C":"3","D":"4","E":"5","F":"6","G":"7"}
column_max=[101,43,57,19,56,40,92]
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
elif first==0:
    word=input('\033[33m'+ name +" : "+ '\033[32m')
    exist=find_naver(word)
    while exist==0:
        print('\033[34m' + "PC :" + '\033[32m' + "존재하지 않는 단어입니다.")
        word=input('\033[33m'+ name +" : "+ '\033[32m')
        exist=find_naver(word)
def word_list_append(voca):
    a=voca[:1]
    a=str(a)
    column=alphabet_key.get(a)
    column=str(column)
    max=column_key.get(column)
    for i in range(1,int(max)):
        cell=column+str(i)
        if wordbook[cell]!=voca:
            


if exist==1:
    duplicate["A"+str(duplicate_row)]=word
