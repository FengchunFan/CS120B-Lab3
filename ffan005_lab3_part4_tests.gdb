echo ======================================================\n
echo Running all tests..."\n\n

# Example test:
test "PINA: 0x00 => PORTB: 0x00, PORTC: 0x00"
setPINA 0x00
continue 2
expectPORTB 0x00
expectPORTC 0x00
checkResult

test "PINA: 0xC9 => PORTB: 0x0C, PORTC: 0x90"
setPINA 0xC9
continue 2
expectPORTB 0x0C
expectPORTC 0x90
checkResult

test "PINA: 0x25 => PORTB: 0x02, PORTC: 0x50"
setPINA 0x25
continue 2
expectPORTB 0x02
expectPORTC 0x50
checkResult

test "PINA: 0xFE => PORTB: 0x0F, PORTC: 0xE0"
setPINA 0xFE
continue 2
expectPORTB 0x0F
expectPORTC 0xE0
checkResult

test "PINA: 0x4A => PORTB: 0x04, PORTC: 0xA0"
setPINA 0x4A
continue 2
expectPORTB 0x04
expectPORTC 0xA0
checkResult
# Add tests below

# Report on how many tests passed/tests ran
set $passed=$tests-$failed
eval "shell echo Passed %d/%d tests.\n",$passed,$tests
echo ======================================================\n
