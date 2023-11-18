# Godot-4-Mii-Resource-Class
This is a little script I wrote for a project I'm working on that adds a custom Resource, `MiiDataResource`, to Godot 4

Performance issues likely will not be an issue with the script, because I have switched to bitwise operators for the `LoadFromBuffer` and `WriteToBuffer` functions.
I am working on a custom C++ module implementation of the script, which is what's in the `mii` folder. If you want to see how far along that is, check [To-do/Roadmap](https://github.com/c08oprkiua/Godot-4-Mii-Resource-Class/edit/main/README.md#to-doroadmap).

Most of the stats of the Mii are stored in integers, I plan to change this to enumerated values for the convenience of making new Miis in the editor. 

Script has been tested, and currently does not work due to a bug (See [To-do/Roadmap](https://github.com/c08oprkiua/Godot-4-Mii-Resource-Class/edit/main/README.md#to-doroadmap)), but the binary data helper functions have been tested and work.

# Functions
> `LoadFromBuffer(buffer: PackedByteArray)`

(Incomplete, non-working) This takes a PackedByteArray, `buffer`, of Mii data and writes all the data of it to the values of the instance of the MiiDataResource. `buffer` should be 96 bytes, but currently no actual size checks are implemented.
> `WriteToBuffer()`

(Not implemented yet) Writes all the stats of the MiiDataResource instance to a PackedByteArray and returns that.

> `ByteToBinary(byte:int)`

(Depreciated) This is a helper function that takes an integer, `byte`, and calculates what its representation in binary is, and returns that as an Integer Array of 1s and 0s. Note, this will produce "odd" results, so you could get Arrays that are 5 entries long, 3 entries long, etc. (It doesn't add filler to clamp to actual byte multipliers).

> `BinaryToInt(binary: Array)`

(Depreciated) This does the opposite of `ByteToBinary`; it takes a binary array created by that function, and turns it back into an integer. Useful for getting values from odd amounts of bits, such as from 3 bits or 5 bits. 


# To-do/roadmap
## General/Misc.
- [x] ~~Add To-do list~~
- [ ] "Generate Random Mii" type function
- [ ] Port module to GDExtension

## GDscript
- [ ] Switch functions to use bitwise operators:
  - [x] `LoadFromBuffer`
  - [ ] `WriteToBuffer`
- [x] Script bugfix: helper functions do not process data when their return is assigned to a variable, for some reason.
  * Fixed because I don't even use those helper functions anymore
- [x] Clamp variables to valid ranges

## C++ Module
- [x] Switch functions to use bitwise operators
  - [ ] `LoadFromBuffer`
  - [ ] `WriteToBuffer`
- [ ] Clamp variables to valid ranges
  - [ ] Meta
  - [ ] General
  - [ ] Face Misc.
  - [x] Hair
  - [x] Eyes
  - [x] Eyebrows
  - [x] Nose
  - [x] Mouth
  - [x] Facial Hair
  - [x] Glasses
  - [x] Mole
- [x] Implement helper functions
- [ ] Implement variables:
  - [ ] Meta
  - [ ] General
  - [ ] Face Misc.
  - [x] Hair
  - [x] Eyes
  - [x] Eyebrows
  - [x] Nose
  - [x] Mouth
  - [x] Facial Hair
  - [x] Glasses
  - [x] Mole
- [ ] `LoadBuffer`
- [ ] `WriteToBuffer`

# Thanks to:
* @aboood40091 for decompiling [the Wii U FFL](https://github.com/aboood40091/ffl)
  * Aboood himself for having the patience for putting up with my smooth-brained self on Discord
* [This github repo](https://github.com/HEYimHeroic/MiiDataFiles)/[This website](https://sites.google.com/view/miilibrary/contactfaqother/FAQ)
* The [3DS](https://www.3dbrew.org/wiki/Mii) and [Wii](https://wiibrew.org/wiki/Mii_data) wikis on the Mii data format
* AJ's Mii Editor
