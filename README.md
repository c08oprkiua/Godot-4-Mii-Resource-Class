# Godot-4-Mii-Resource-Class
This is a little script I wrote for a project I'm working on that adds a custom Resource, `MiiDataResource`, to Godot 4

Realistically speaking, with how often this script calls helper functions to read binary data, I should really translate this into a custom module written in C++ for performance, but right now it's just a GDScript file. 

Most of the stats of the Mii are stored in integers, I plan to change this to enumerated values for the convenience of making new Miis in the editor. 

And the function are completely untested tbh, I have had no time to actually check anything.

# functions
> `LoadFromBuffer(buffer: PackedByteArray)`

This takes a PackedByteArray, `buffer`, of Mii data and writes all the data of it to the values of the instance of the MiiDataResource.
> `WriteToBuffer()`

(Not implemented yet) Writes all the stats of the MiiDataResource instance to a PackedByteArray and returns that.

> `ByteToBinary(byte:int)`

This is a helper function that takes an integer, calculates what its representation in binary is, and returns that as an Integer Array of 1s and 0s. Note, this will produce "odd" results, so you could get Arrays that are 5 entries long, 3 entries long, etc. (It doesn't add filler to clamp to actual byte multipliers).


