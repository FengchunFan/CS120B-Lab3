echo ======================================================\n
echo Running all tests..."\n\n

# Example test:
test "PINA: 0x00 , PINB: 0x00 => PORTB: 0x00"
setPINA 0x00
setPINB 0x00
continue 2
expectPORTB 0x00
checkResult

test "PINA: 0x23 , PINB: 0x00 => PORTB: 0x02"
setPINA 0x23
setPINB 0x00
continue 2
expectPORTB 0x01
checkResult

test "PINA: 0x23 , PINB: 0x01 => PORTB: 0x03"
setPINA 0x23
setPINB 0x01
continue 2
expectPORTB 0x03
checkResult

test "PINA: 0x03 , PINB: 0x01 => PORTB: 0x05"
setPINA 0x03
setPINB 0x01
continue 2
expectPORTB 0x05
checkResult

test "PINA: 0x03 , PINB: 0x00 => PORTB: 0x04"
setPINA 0x03
setPINB 0x00
continue 2
expectPORTB 0x04
checkResult
# Add tests below

# Report on how many tests passed/tests ran
set $passed=$tests-$failed
eval "shell echo Passed %d/%d tests.\n",$passed,$tests
echo ======================================================\n
