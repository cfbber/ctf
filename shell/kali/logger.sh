#!/bin/bash

LOG_FILE="my_script.log"

# 定义日志级别
DEBUG=0
INFO=1
WARNING=2
ERROR=3

# 日志输出函数
log() {
    local level=$1

    shift
    local message=$@

    # 获取当前时间
    timestamp=$(date +"%Y-%m-%d %H:%M:%S")
   if [ "$level" -eq "$DEBUG" ];then
	 message="-------------------$message-------------------"
   
   fi

    # 输出到控制台
    echo -e "[$timestamp] [$level] \e[1;32m$message\e[0m"

    # 输出到日志文件
#    echo "[$timestamp] [$level] $message" >> "$LOG_FILE"
}

# log $INFO -----------------
# log $ERROR sfewe -----------------
 log $DEBUG sfsdf
