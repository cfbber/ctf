#!/bin/bash

seqNum=0
find $1 -type f | while IFS= read -r file; do


    if [ -f "$file" ]; then
        # 获取当前时分秒作为文件前缀
        prefix=$(date '+%H%M%S')_$seqNum
	let seqNum+=1

        # 获取文件名（不包含路径）
        filename=$(basename "$file")

	ext=$(echo $filename | awk -F'.' '{print$2}')
        if [ -z "$ext" ];then
 	   ext="tttt"
	fi
	

        # 构建目标文件路径
        destination_file=/ctf/$prefix.$ext

        # 复制文件到目标路径，并修改文件名
        cp "$file" "$destination_file"

        echo "Copied: $file to $destination_file"
    fi
done
