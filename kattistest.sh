#!/bin/bash
problem=$(basename "$PWD")
rm -rf ./samples* && wget -q -O samples.zip "https://open.kattis.com/problems/"$problem"/file/statement/samples.zip" && unzip -qq -j samples.zip -d samples/
for i in ./samples/*.in; do 
		
		./$problem < "$i" > "${i%.*}".out;
		
		if ! diff -q "${i%.*}".out "${i%.*}".ans &>/dev/null; then
			echo "Test `basename "${i%.*}"` failed."
		
		else
			echo "Test `basename "${i%.*}"` passed."	
		fi
		
done	
rm -rf ./samples*
