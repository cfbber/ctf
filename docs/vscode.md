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