# import discord
# import asyncio
# from discord.ext import commands
# import requests
# from bs4 import BeautifulSoup
from datetime import datetime
# from selenium import webdriver
import nipy

year= datetime.today().year  
month=datetime.today().month
day= datetime.today().day
today=str(year)+"."+str(month)+"."+str(day)

l = nipy.Scode("미래", "서울")
print(l.codefind("3"))
# client = commands.Bot(command_prefix='=')
# token='OTY0ODY2MTk4MTAzODE4MjUw.Ylq3qw.aUnZJ8MgmPUD_WLBteCQeeyvOBQ'
# @client.event
# async def on_ready():
#     print(client.user.name)
#     print('시작되었습니다.')
#     game=discord.Game('Hearthstone')
#     await client.change_presence(status=discord.Status.online, activity=game)
# @bot.command()
# async def 안녕(ctx):
#  await ctx.send("안녕 만나서 반가워")
# @bot.command()
# async def 급식(ctx):
#  await ctx.send("안
# client.run(token)