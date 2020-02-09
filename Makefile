#--------
# This library is not meant for linux. it is only for windows.
# we then only include the cleaning part
#--------

# Delete all generated files we know about.
clean :
	rm -f *.o
	rm -f -r Debug
	rm -f -r Release
	rm -f -r x64
	rm -f lib/*.*
	touch lib/.ignore

# Come back and define default target.
all :
	echo "dynobjloader: nothing is needed for the dynobjloader since it is natively supported in Unix"


push: clean pull
	git add -A .
ifeq ($(MSG),)
	git commit -m"A commit without a message !"
else
	git commit -m"$(MSG)"
endif	
	git push
	
pull:
	git pull
