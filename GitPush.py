import os,pexpect,sys
os.system("rm *.*~")
os.system("rm *.out")
os.system("rm *.class")
os.system("git add -A")
os.system("git status")
print sys.argv[1]
os.system("git commit -m \""+sys.argv[1]+"\"")
git = pexpect.spawn("git push")
git.expect(": ")
git.sendline("0xc0d3r")
git.expect(": ")
git.sendline("Rgukt123*")
