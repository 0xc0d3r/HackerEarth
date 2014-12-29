import os,pexpect,sys
os.system("rm *.*~")
os.system("rm *.out")
os.system("rm *.class")
os.system("git add -A")
os.system("git status")
print sys.argv[1]
os.system("git commit -m \""+sys.argv[1]+"\"")
git = pexpect.spawn("git push")
git.expect("*'https://github.com':")
git.sendline("0xc0d3r")
git.expect("*.com':'")
git.sendline("Rgukt123*")
