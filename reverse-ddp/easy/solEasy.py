import random

number = '','satu','dua','tiga','empat','lima','enam','tujuh','delapan','sembilan'

def generate(n):
	if (n == 0) : return 'nol'
	def ratusan(a):
		teks = []
		if a//100 == 1 :
			teks += ['seratus']
		elif a//100 > 1 :
			teks += [number[a//100] + ' ratus']

		a %= 100

		if 9 < a < 20:
			if a == 10 :
				teks += ['sepuluh']
			elif a == 11:
				teks += ['sebelas']
			else :
				teks += [number[a%10] + ' belas']
		else :
			if a > 10:
				teks += [number[a//10] + ' puluh']
			teks += [number[a%10]]

		return teks

	if type(n) != int or n < 1 or n > 100000:
		pass
	teks = []
	if n > 999:
		teks += ratusan(n//1000)
		if teks[-1] == 'satu':
			teks[-1] = 'seribu'
		else :
			teks += ['ribu']
	teks += ratusan(n%1000)

	teks = [x for x in teks if len(x) > 0]

	return ' '.join(teks).rstrip()

def main():
	while True:
		angka = int(input())
		print(generate(angka))

def generateTC():
	f = open('tc.out', 'w')
	ff = open('tc.in', 'w')
	avNum = []
	for i in range(90):
		rnum = random.randrange(0,1001)
		while rnum in avNum:
			rnum = random.randrange(0,1001)
		avNum.append(rnum)
		f.write(str(rnum) + '\n')
		ff.write(generate(rnum) + '\n')


def writeToFile():
	f = open('jawaban.py', 'w')
	kata = 'if angka == ' + str(1) + ':\n'
	f.write(kata)
	kata = '    kata = "' + generate(1) + '"\n'
	f.write(kata)

	for i in range(2,100001):
		kata = 'elif angka == ' + str(i) + ':\n'
		f.write(kata)
		kata = '    kata = "' + generate(i) + '"\n'
		f.write(kata)

if __name__ == '__main__':
	generateTC()
	# writeToFile()\