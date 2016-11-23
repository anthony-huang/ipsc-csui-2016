import random
import sys

satuan = ['', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
sepuluhan = ['ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen', 'sixteen', 'seventeen', 'eighteen', 'nineteen']
puluhan = [None, None, 'twenty', 'thirty', 'forty', 'fifty', 'sixty', 'seventy', 'eighty', 'ninety']

def hundredsConverter(num):
	if num == 0 : return 'zero'
	if num == 1000 : return 'one thousand'
	text = []
	if num//100 > 0:
		text  += [satuan[num//100] + ' hundred']
	num %= 100
	if num//10 > 1:
		text += [puluhan[num//10] + ' ' + satuan[num%10]]
	elif num//10 == 1:
		text += [sepuluhan[num%10]]
	else :
		text += [satuan[num%10]]
	return ' '.join(text).rstrip()

def generateTC():
	f = open('tc.in', 'w')
	ff = open('tc.out', 'w')
	avNum = []
	for i in range(90):
		num = random.randrange(0,1001)
		while num in avNum:
			num = random.randrange(0,1001)
		avNum.append(num)
		f.write(hundredsConverter(num) + '\n')
		ff.write(str(num) + '\n')


def bruteForce():
	for i in range(1001):
		print(hundredsConverter(i))

def test():
	for line in sys.stdin:
		line = int(line)
		print(hundredsConverter(line))

# bruteForce()
# generateTC()
test()