#!/bin/bash

source ~/tools/logger.sh


file_name="$1"
last_file=$(find /ctf -maxdepth 1 -type f -printf '%T@ %p\n' | grep -Ev '\.sh$' | sort -n | tail -n 1 | cut -d ' ' -f 2- | xargs basename)


file_name=${1:-$last_file}

log $DEBUG '>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>'
log $DEBUG analy file: $file_name


current_time=$(date +"%d%_H%M%S")

#prefix="${file_name:0:4}"
prefix=''

suf=`echo $file_name |  cut -d'.' -f2`

directory_name=/ctf/"${current_time}_${suf}"

mkdir "$directory_name"

cd $directory_name

cp ../$file_name ./


file $file_name

file_type=` file --mime-type -b $file_name `

log $DEBUG exiftool
exiftool $file_name

log $DEBUG strings  grep

strings $file_name | grep -i flag

log $DEBUG  grep ctf

strings $file_name | grep -i ctf

log $DEBUG grep {}
strings $file_name | grep {.*}


log $INFO ------------------------------------------------
log $INFO ------------------------------------------------
log $INFO ------------------------------------------------

log $DEBUG bmp/png using zsteg

if [ $file_type = "image/bmp" ] || [ $file_type = "image/png" ] ; then

 zsteg $file_name
fi

echo ------------------------------------------------

log $DEBUG image-- outguess
if [[ $file_type =~ "image/.*" ]];then
	outguess -r $file_name guess.txt
	cat guess.txt
fi


if [ $suf = "pcap" ] || [ $suf = "pcapng" ];then
  log $DEBUG 流量分析 tcpxtract
  tcpxtract -f $file_name
fi

log $DEBUG binwalk
binwalk -e $file_name

log $DEBUG foremost

foremost $file_name

tree -a ./

log $DEBUG   grep -$PWD 提取 file

log $DEBUG grep flag
grep -i flag ./ -r -n

log $DEBUG grep {}
grep {.*} ./ -r -n

log $DEBUG find flag file
find ./ -name "*flag*"

if [ $file_type = "application/zip" ]; then
		log $DEBUG 解压zip
	    unar $file_name -o zips

	    Zfile_count=$(find ./zips -type f | wc -l )

	    if [ $Zfile_count -le 2 ];then
		    sh ~/tools/unz.sh $directory_name/zips
	    fi
fi

echo $PWD