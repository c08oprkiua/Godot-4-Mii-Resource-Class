# Godot-4-Mii-Resource-Class
This is a little script I wrote for a project I'm working on that adds a custom Resource, `MiiDataResource`, to Godot 4

Because I forsee performance issues with using the GDScript script, I am working on a custom C++ module implementation of the script, which is what's in the `miidata` folder.

Most of the stats of the Mii are stored in integers, I plan to change this to enumerated values for the convenience of making new Miis in the editor. 

And the function are completely untested tbh, I have had no time to actually check anything.

# functions
> `LoadFromBuffer(buffer: PackedByteArray)`

(Incomplete, nonworking) This takes a PackedByteArray, `buffer`, of Mii data and writes all the data of it to the values of the instance of the MiiDataResource. `buffer` should be 96 bytes, but currently no actual size checks are implemented.
> `WriteToBuffer()`

(Not implemented yet) Writes all the stats of the MiiDataResource instance to a PackedByteArray and returns that.

> `ByteToBinary(byte:int)`

This is a helper function that takes an integer, `byte`, and calculates what its representation in binary is, and returns that as an Integer Array of 1s and 0s. Note, this will produce "odd" results, so you could get Arrays that are 5 entries long, 3 entries long, etc. (It doesn't add filler to clamp to actual byte multipliers).

> `BinaryToInt`

This does the opposite of `ByteToBinary`; it takes a Binary array created by that function, and turns it back into an integer. Useful for getting values from odd amounts of bits, such as from 3 bits or 5 bits. 


# To-do/roadmap

- [x] ~~Add To-do list~~ 
- [ ] "Generate Random Mii" type function
- [ ] Bugfix: helper functions do not process data when their return is assigned to a variable, for some reason. 
- [ ] Complete and test custom module
- [ ] Port module to GDExtension