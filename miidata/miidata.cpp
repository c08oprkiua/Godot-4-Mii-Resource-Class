//C++ port of Mii.gd

#include "miidata.h"


void MiiDataResource::LoadFromBuffer(PackedByteArray buffer){
    Array binary;

}

void MiiDataResource::WriteToBuffer(){

}
void MiiDataResource::_bind_methods(){
    ClassDB::bind_method(D_METHOD("LoadFromBuffer", "buffer") &MiiDataResource::LoadFromBuffer);
    ClassDB::bind_method(D_METHOD("WriteToBuffer"), &MiiDataResource::WriteToBuffer);
}

//I'd switch this to an int TypedArray if I could
//wrap my head around the syntax
Array ByteToBinary(u_int byte){
    Array bytevalues;
    u_int bytesize;
    bytesize = 1;
    while (bytesize < byte)
    {
        bytevalues.append(bytesize);
        bytesize = bytesize << 1;
    };
    Array binarr;
    bytevalues.reverse();
    u_int vals = 0;
    for (vals = 0; vals <= bytevalues.size(); vals++){
        if (byte >= vals){
            binarr.append(1);
        }
        else {
            binarr.append(0);
        };
    };
}

MiiDataResource::MiiDataResource(){

}