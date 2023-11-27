# Godot-4-Mii-Resource-Class
Adds a custom Resource, `MiiDataResource`, to Godot 4, which allows for much easier readback, manipulation, and creation of Miis

There are two main things of interest in here:
* The script of the class, `Mii.gd`, in the `Scripts` folder. This is an easy peasy drag and drop solution if you want to easily add this to your project.
* A custom C++ module implementation of the script, which is what's in the `mii` folder. If you want to see how far along that is, check [To-do/Roadmap](https://github.com/c08oprkiua/Godot-4-Mii-Resource-Class/edit/main/README.md#to-doroadmap). This implementation more in depth, because you have to compile it with the engine, but also supports in-engine documentation, as well as a ~~likely marginal~~ performance boost from being written in direct C++.

Script currently works, so does the C++ module. C++ module contains enumerations for a handful of values, which the script does not yet have.

# Functions
> `LoadFromBuffer(buffer: PackedByteArray)`

(Incomplete) This takes a PackedByteArray, `buffer`, of Mii data and writes all the data of it to the values of the instance of the MiiDataResource. Right now it specifically is expecting the data format from a Wii U/Switch.
> `WriteToBuffer()`

(Not implemented yet) Writes all the stats of the MiiDataResource instance in the Wii U/Switch format to a file.

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

If you have any questions, join my [Discord](https://discord.com/invite/Mu6YUEmerN) or make an issue on Github.