#!/bin/sh

if [ $# -eq 2 ]
then
	ARG=`ruby -e "puts ($1..$2).to_a.shuffle.join(' ')"`
	./push_swap $ARG | ./checker_linux $ARG
else
	echo "Usage:\n./check_script \e[32mstart_num end_num\e[0m"
	exit
fi
