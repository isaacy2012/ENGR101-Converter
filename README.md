# ENGR101 Frequency Converter
Simple converting program which converts a .txt file "[input].txt" to "frequencies\_[input].txt". Uses a map to convert input notes to frequencies for use in ENGR101 Project 1 Challenge. 

# Example
"the\_only\_way.txt" contains the notes for an excerpt of [The Only Way - Emerson Lake & Palmer](https://www.youtube.com/watch?v=IPVgKAmaghI), and "frequencies\_the\_only\_way.txt" contains the converted frequencies.

# Specification
The notation is as follows: 

- The first digit controls the octave, with middle C at **3**1
- The notes **C** through **B** are controlled by the second digit, such that F above middle C is at 3**4**
- The notation *only* uses flats such that F#/G♭ above middle C is at -35.

Therefore, a simple melody of "Mary Had A Little Lamb" starting at E above middle C would be defined as follows: 

```
33
32
31
32
33
33
33
32
32
32
33
33
33
33
32
31
32
33
33
33
33
32
32
33
32
31
```
And convert into: 
```329.628
293.665
261.626
293.665
329.628
329.628
329.628
293.665
293.665
293.665
329.628
329.628
329.628
329.628
293.665
261.626
293.665
329.628
329.628
329.628
329.628
293.665
293.665
329.628
293.665
261.626
```
The delimiter is a newline for readability and ease of input.

