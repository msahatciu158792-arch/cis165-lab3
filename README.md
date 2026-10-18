# Lab 3: C++ Output and Time Calculations

## Program plans — complete in your own words

### `diamond.cpp`
I will use seven separate cout statements to print the diamond one line at a time. The top line has three spaces and one asterisk. Each line below it adds asterisks and removes spaces until the middle line has seven asterisks. The bottom half repeats the pattern in reverse. I will compare the output in Terminal with the required pattern to check the spacing.

### `game_time.cpp`
I will store the assigned times of 78 and 144 minutes in named constants. I will use integer division by 60 to calculate the hours and the remainder operator to calculate the remaining minutes. I will subtract the Level 1 time from the Level 2 time to find the difference. I will store the calculated results in variables before displaying all three results with labels.

> Before submitting, replace both TODOs with your own explanation. Do not claim you wrote either plan before using AI if that is not what happened.

## Tests

The expected results below are calculation references. Run the programs yourself, then fill in the actual-output and result columns based on what you observe in your own run. The code was also compiled and checked in a separate local environment during preparation, but that does not replace your required runs.

| Program/test | Values or pattern checked | Expected result before running | Actual output from your run | Match or correction |
|---|---|---|---|---|
| `diamond.cpp` | Seven required lines | 3 spaces + 1 star; 2 spaces + 3 stars; 1 space + 5 stars; 0 spaces + 7 stars; then mirror the first three lines | TODO: Paste or describe your output/check | All seven lines matched the required pattern. No correction was needed. |
| `game_time.cpp` — assigned values | Level 1 = 78 minutes; Level 2 = 144 minutes | Level 1: 78 / 60 = 1 hour, 78 % 60 = 18 minutes. Level 2: 144 / 60 = 2 hours, 144 % 60 = 24 minutes. Difference: 144 − 78 = 66 minutes = 1 hour, 6 minutes. | Level 1 time: 1 hour(s) and 18 minute(s).
Level 2 time: 2 hour(s) and 24 minute(s).Difference (Level 2 - Level 1): 1 hour(s) and 6 minute(s). | The actual output matched the expected results. No correction was needed. |
| `game_time.cpp` — changed values | Temporarily use Level 1 = 95 minutes and Level 2 = 173 minutes | Level 1: 1 hour, 35 minutes. Level 2: 2 hours, 53 minutes. Difference: 173 − 95 = 78 minutes = 1 hour, 18 minutes. | Level 1 time: 1 hour(s) and 35 minute(s).
Level 2 time: 2 hour(s) and 47 minute(s).Difference (Level 2 - Level 1): 1 hour(s) and 12 minute(s). | The actual output matched the expected results. No correction was needed.|

For the changed-values test, temporarily change the two constants in `game_time.cpp` to 95 and 173, run the program, and then restore them to 78 and 144. After restoring the assigned values, rerun both programs and record that final check here:

- Final `diamond.cpp` run: TODO
- Final `game_time.cpp` run with 78 and 144 restored: TODO

## Code explanations — write these in your own words

### `diamond.cpp`

I will use seven cout statements to print the diamond one line at a time. The top line has three spaces and one asterisk. Each line below it adds asterisks and removes spaces until the middle line has seven asterisks. The bottom half repeats the pattern in reverse.

### `game_time.cpp`

 I will store the two assigned times, 78 minutes and 144 minutes, in named constants. I will use division by 60 to calculate hours and the remainder operator to calculate the remaining minutes. Then I will subtract the first level's time from the second level's time and convert that difference into hours and minutes. Finally, I will display all three results with clear labels.

### Why store calculations in variables?
I store each calculation in a variable before displaying it so the program is easier to read and the results are easier to check. It also keeps the math separate from the output statements, as the assignment requires. The minutes just because hours like 78 minutes becomes 1 hour and 18 minutes,144 minutes becomes 2 hours and 24 minutes and 66 minutes becomes 1 hour and 6 minutes.

## Final checklist

- [ ] Both `.cpp` files compile and run separately.
- [ ] All seven diamond lines match the requested spacing and asterisks.
- [ ] Both time tests have been run and recorded honestly.
- [ ] `game_time.cpp` has been restored to 78 and 144 minutes.
- [ ] Both programs have been rerun with the final code.
- [ ] All TODO sections above have been completed in my own words.
- [ ] The `.cpp` source files and `README.md` have been uploaded to the public GitHub repository.
