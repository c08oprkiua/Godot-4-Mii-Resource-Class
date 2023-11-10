//C++ port of Mii.gd

#include "miidata.h"


void MiiDataResource::LoadFromBuffer(PackedByteArray buffer){
    TypedArray<int8_t> binary


}

void MiiDataResource::WriteToBuffer(){

}
void MiiDataResource::_bind_methods(){
    ClassDB::bind_method(D_METHOD("LoadFromBuffer", "buffer") &MiiDataResource::LoadFromBuffer);
    ClassDB::bind_method(D_METHOD("WriteToBuffer"), &MiiDataResource::WriteToBuffer);
}

TypedArray<bool> ByteToBinary(uint8_t byte){
    TypedArray<int> bytevalues;
    u_int bytesize;
    bytesize = 1;
    while (bytesize < byte)
    {
        bytevalues.append(bytesize);
        bytesize = bytesize*2;
    }
    TypedArray<int> binarr;
    bytevalues.reverse();
    for (){

    }
        



}