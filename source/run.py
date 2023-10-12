import subprocess

def expect(process, pattern):
    buffer = ''
    while True:
        buffer += process.stdout.read(1).decode()
        if buffer.endswith(pattern):
            return buffer
        
EXE = '/usr/local/bin/vintbas'
ARG = 'main.bas'

# creating a Two to Ten process
process = subprocess.Popen(
    [EXE, ARG],
    stdout=subprocess.PIPE,
    stdin=subprocess.PIPE
)

# reading stdout until "PLACE YOUR BET ..."
output = ''
output += expect(process, 'PLACE YOUR BET ... YOU HAVE $ 200  TO SPEND.? ')

# writing bets in stin
process.stdin.write(b'100\n')
process.stdin.flush()

# reading stdout until "final_line"
output += expect(process, 'final_line')
print(output)