#ifndef MIIDATA_H
#define MIIDATA_H

#include "core/io/resource.h"

class MiiDataResource : 
public Resource {
    GDCLASS(MiiDataResource, Resource);

protected:
	static void _bind_methods();

public:
    MiiDataResource();
    void LoadFromBuffer(PackedByteArray buffer);

    void WriteToBuffer();

    // Meta
    int version;
    bool profanity;
    enum region_lock {none, JPN, USA, EUR};
    enum char_set {JPN_USA_EUR, CHN, KOR, TWN};
    enum origin_device {Wii = 1, DS, ThreeDS, WiiUSwitch};
    int mii_id;
    int creation_date;
    //bool unknown;
    bool temporary;
    bool dsi;
    bool special;
    String mac_address;

    //General
    enum sex {Male, Female};
    int birthday_month;
    int birthday_day;
    int favorite_color;
    bool favorite_mii;
    String mii_name;
    float width;
    float height;
    bool sharable;
    String author;

    //Face misc.
    int face_shape;
    int skin_color;
    int wrinkles;
    int makeup;

    //Hair 
    int hair_style;
    int hair_color; 
    bool hair_flip;

    //Eyebrows
    ~MiiDataResource();
};

VARIANT_ENUM_CAST(MiiDataResource::sex);
VARIANT_ENUM_CAST(MiiDataResource::region_lock);
VARIANT_ENUM_CAST(MiiDataResource::char_set);
VARIANT_ENUM_CAST(MiiDataResource::origin_device);

#endif