### vscode
格式化代码： Shift + Alt + F

* 同步配置
另一台机器，选择 backup and sync setting，登录后，会根据提示 setting冲突，选择 replace local，会自动同步 setting及插件

* markdown支持好像不是很好

* 配置c环境
1. 下载  https://github.com/skeeto/w64devkit
2. 用户PATH添加:` C:\app\w64devkit\bin`
3. gcc -v显示正常，即成功
4. 重启vscode

* c代码中文代码
1. 修改c代码格式gb2312
2. 修改cmd默认chcp值，修改code runner命令，手动修改chcp 65001

### git proxy
解决访问不了github问题

* 设置 HTTP 使用 SOCKS5 代理
git config --global http.proxy socks5://127.0.0.1:51837

* 设置 HTTPS 使用 SOCKS5 代理
git config --global https.proxy socks5://127.0.0.1:51837

* 查看当前代理设置
git config --global --get http.proxy
git config --global --get https.proxy

* 取消代理设置
git config --global --unset http.proxy
git config --global --unset https.proxy

* 解决git clone失败，先浅拷贝，再全下
  fatal : The remote end hung up unexpectedly
 git clone --depth=1 http://git地址
cd xxx ; git fetch --unshallow

* git关联多个仓库
git remote add gitee https://gitee.com/cfbber/ctf.git
git push -u gitee master
git remote rm origin


