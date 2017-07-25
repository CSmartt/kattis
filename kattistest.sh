#!/bin/bash
problem=$(basename "$PWD")
wget --progress=bar -q -O samples.zip "https://open.kattis.com/problems/"$problem"/file/statement/samples.zip" && dtrx samples.zip
for i in ./samples/*.in;
	do 
		./$problem < "$i" > "${i%.*}".out;
		if ! diff -q "${i%.*}".out "${i%.*}".ans; then
			echo "Test `basename "${i%.*}"` failed."
		else
			echo "Test `basename "${i%.*}"` passed."	
		fi
	done	
