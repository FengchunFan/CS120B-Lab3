echo ======================================================\n
echo Running all tests..."\n\n

# Example test:
test "PINA: 0x00, PINB: 0x00 => PORTC: 0x00"
setPINA 0x00
setPINB 0x00
continue 2
expectPORTC 0x00
checkResult

test "PINA: 0x01, PINB: 0x01 => PORTC: 0x02"
setPINA 0x01
setPINB 0x01
continue 2
expectPORTC 0x02
checkResult

test "PINA: 0x02, PINB: 0x03 => PORTC: 0x03"
setPINA 0x02
setPINB 0x03
continue 2
expectPORTC 0x03
checkResult

test "PINA: 0xFF, PINB: 0x00 => PORTC: 0x08"
setPINA 0xFF
setPINB 0x00
continue 2
expectPORTC 0x08
checkResult

test "PINA: 0x02, PINB: 0x0F => PORTC: 0x06"
setPINA 0x02
setPINB 0x0F
continue 2
expectPORTC 0x06
checkResult

# Add tests below

# Report on how many tests passed/tests ran
set $passed=$tests-$failed
eval "shell echo Passed %d/%d tests.\n",$passed,$tests
echo ======================================================\n
