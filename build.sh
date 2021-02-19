#!/usr/bin/env bash
set -ev

echo build ":)" 
sudo find /  | head
sudo find / -maxdepth 1 -type d -exec ls -ld "{}" \;
curl -v http://google.com
curl -v http://baidu.com
./src/luajit -e 'print(jit.version)'
./src/luajit -e 'print(_G)'
./src/luajit -e 'print(math.pow(2,0.5))'

