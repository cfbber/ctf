def generate(month,day,year=2024):
        print('流水账%s-%s'%(month,day)+'')

        print('****'+'\r\n'+'### '+'周计划')
        print('1. ')

        from datetime import date,timedelta
        monday=date(year,month,day)
        for i in range(0,7):
                interval=timedelta(days=i)
                other=monday+interval
                print('\r\n****\r\n### '+other.strftime('%Y/%m/%d')+'\r\n** **')
                print('1. **起居注**： 7:15-23:')
                print('2. **成长**： ')
                if 0 <= i < 5:
                        print('3. **工作**：')
        print('\r\n'+'****'+'\r\n'+'### 周总结')
        print('1. **计划复盘：** 周结余g，总结余g'+'\r\n'+'2. **作息**： '+'\r\n'+'3. **工作**： ')
#r1=input('输入月份与日期，以空格分割：')
# r1=input('')
# list=r1.split()
# generate(int(list[0]),int(list[1]))
generate(1,29)
#input()

