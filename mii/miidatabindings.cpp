#include "miidata.h"


void MiiDataResource::_bind_methods(){
    ClassDB::bind_method(D_METHOD("LoadFromBuffer", "buffer"), &MiiDataResource::LoadFromBuffer);
    ClassDB::bind_method(D_METHOD("WriteToBuffer"), &MiiDataResource::WriteToBuffer);
    //Meta
    ClassDB::bind_method(D_METHOD("set_version", "new_version"), &MiiDataResource::set_version);
    ClassDB::bind_method(D_METHOD("get_version"), &MiiDataResource::get_version);
    ClassDB::bind_method(D_METHOD("set_profanity", "is_profane"), &MiiDataResource::set_profanity);
    ClassDB::bind_method(D_METHOD("get_profanity"), &MiiDataResource::get_profanity);
    ClassDB::bind_method(D_METHOD("set_region_lock", "locked_region"), &MiiDataResource::set_region_lock);
    ClassDB::bind_method(D_METHOD("get_region_lock"), &MiiDataResource::get_region_lock);
    ClassDB::bind_method(D_METHOD("set_char_set", "character_set_used"), &MiiDataResource::set_char_set);
    ClassDB::bind_method(D_METHOD("get_char_set"), &MiiDataResource::get_char_set);
    ClassDB::bind_method(D_METHOD("set_origin_device", "origin_device"), &MiiDataResource::set_origin_device);
    ClassDB::bind_method(D_METHOD("get_origin_device"), &MiiDataResource::get_origin_device);
    ClassDB::bind_method(D_METHOD("set_mii_id", "new_id"), &MiiDataResource::set_mii_id);
    ClassDB::bind_method(D_METHOD("get_mii_id"), &MiiDataResource::get_mii_id);
    ClassDB::bind_method(D_METHOD("set_creation_date", "creation_date"), &MiiDataResource::set_creation_date);
    ClassDB::bind_method(D_METHOD("get_creation_date"), &MiiDataResource::get_creation_date);
    ClassDB::bind_method(D_METHOD("set_dsi", "dsi"), &MiiDataResource::set_dsi);
    ClassDB::bind_method(D_METHOD("get_dsi"), &MiiDataResource::get_dsi);
    ClassDB::bind_method(D_METHOD("set_special", "special"), &MiiDataResource::set_special);
    ClassDB::bind_method(D_METHOD("get_special"), &MiiDataResource::get_special);
    ClassDB::bind_method(D_METHOD("set_mac_address", "mac_address"), &MiiDataResource::set_mac_address);
    ClassDB::bind_method(D_METHOD("get_mac_address"), &MiiDataResource::get_mac_address);
    
    //General
    ClassDB::bind_method(D_METHOD("set_sex", "sex"), &MiiDataResource::set_sex);
    ClassDB::bind_method(D_METHOD("get_sex"), &MiiDataResource::get_sex);
    ClassDB::bind_method(D_METHOD("set_birthday_month", "birthday_month"), &MiiDataResource::set_birthday_month);
    ClassDB::bind_method(D_METHOD("get_birthday_month"), &MiiDataResource::get_birthday_month);
    ClassDB::bind_method(D_METHOD("set_birthday_day", "birthday_day"), &MiiDataResource::set_birthday_day);
    ClassDB::bind_method(D_METHOD("get_birthday_day"), &MiiDataResource::get_birthday_day);
    ClassDB::bind_method(D_METHOD("set_favorite_color", "color"), &MiiDataResource::set_favorite_color);
    ClassDB::bind_method(D_METHOD("get_favorite_color"), &MiiDataResource::get_favorite_color);
    ClassDB::bind_method(D_METHOD("set_favorite_mii", "is__a_favorite"), &MiiDataResource::set_favorite_mii);
    ClassDB::bind_method(D_METHOD("get_favorite_mii"), &MiiDataResource::get_favorite_mii);
    ClassDB::bind_method(D_METHOD("set_mii_name", "new_name"), &MiiDataResource::set_mii_name);
    ClassDB::bind_method(D_METHOD("get_mii_name"), &MiiDataResource::get_mii_name);
    ClassDB::bind_method(D_METHOD("set_width", "width"), &MiiDataResource::set_width);
    ClassDB::bind_method(D_METHOD("get_width"), &MiiDataResource::get_width);
    ClassDB::bind_method(D_METHOD("set_height", "height"), &MiiDataResource::set_height);
    ClassDB::bind_method(D_METHOD("get_height"), &MiiDataResource::get_height);
    ClassDB::bind_method(D_METHOD("set_sharable", "is_sharable"), &MiiDataResource::set_sharable);
    ClassDB::bind_method(D_METHOD("get_sharable"), &MiiDataResource::get_sharable);
    ClassDB::bind_method(D_METHOD("set_author", "author"), &MiiDataResource::set_author);
    ClassDB::bind_method(D_METHOD("get_author"), &MiiDataResource::get_author);
    //Eyes

    //Eyebrows
    ClassDB::bind_method(D_METHOD("set_eyebrow_style", "eyebrow_style"), &MiiDataResource::set_eyebrow_style);
	ClassDB::bind_method(D_METHOD("get_eyebrow_style"), &MiiDataResource::get_eyebrow_style);    
    ClassDB::bind_method(D_METHOD("set_eyebrow_color", "eyebrow_color"), &MiiDataResource::set_eyebrow_color);
	ClassDB::bind_method(D_METHOD("get_eyebrow_color"), &MiiDataResource::get_eyebrow_color);    
    ClassDB::bind_method(D_METHOD("set_eyebrow_x_scale", "eyebrow_x_scale"), &MiiDataResource::set_eyebrow_x_scale);
	ClassDB::bind_method(D_METHOD("get_eyebrow_x_scale"), &MiiDataResource::get_eyebrow_x_scale);    
    ClassDB::bind_method(D_METHOD("set_eyebrow_y_scale", "eyebrow_y_scale"), &MiiDataResource::set_eyebrow_y_scale);
	ClassDB::bind_method(D_METHOD("get_eyebrow_y_scale"), &MiiDataResource::get_eyebrow_y_scale);    
    ClassDB::bind_method(D_METHOD("set_eyebrow_rotation", "eyebrow_rotation"), &MiiDataResource::set_eyebrow_rotation);
	ClassDB::bind_method(D_METHOD("get_eyebrow_rotation"), &MiiDataResource::get_eyebrow_rotation);    
    ClassDB::bind_method(D_METHOD("set_eyebrow_x_spacing", "eyebrow_x_spacing"), &MiiDataResource::set_eyebrow_x_spacing);
	ClassDB::bind_method(D_METHOD("get_eyebrow_x_spacing"), &MiiDataResource::get_eyebrow_x_spacing);    
    ClassDB::bind_method(D_METHOD("set_eyebrow_y_position", "eyebrow_y_position"), &MiiDataResource::set_eyebrow_y_position);
	ClassDB::bind_method(D_METHOD("get_eyebrow_y_position"), &MiiDataResource::get_eyebrow_y_position);    
	
    //Nose
    ClassDB::bind_method(D_METHOD("set_nose_style", "nose_style"), &MiiDataResource::set_nose_style);
    ClassDB::bind_method(D_METHOD("get_nose_style"), &MiiDataResource::get_nose_style);    
    ClassDB::bind_method(D_METHOD("set_nose_scale", "nose_scale"), &MiiDataResource::set_nose_scale);
	ClassDB::bind_method(D_METHOD("get_nose_scale"), &MiiDataResource::get_nose_scale);    
    ClassDB::bind_method(D_METHOD("set_nose_y_position", "nose_y_position"), &MiiDataResource::set_nose_y_position);
	ClassDB::bind_method(D_METHOD("get_nose_y_position"), &MiiDataResource::get_nose_y_position);    
	
    //Mouth
    ClassDB::bind_method(D_METHOD("set_mouth_style", "mouth_style"), &MiiDataResource::set_mouth_style);
    ClassDB::bind_method(D_METHOD("get_mouth_style"), &MiiDataResource::get_mouth_style);    
    ClassDB::bind_method(D_METHOD("set_mouth_color", "mouth_color"), &MiiDataResource::set_mouth_color);
	ClassDB::bind_method(D_METHOD("get_mouth_color"), &MiiDataResource::get_mouth_color);    
    ClassDB::bind_method(D_METHOD("set_mouth_x_scale", "mouth_x_scale"), &MiiDataResource::set_mouth_x_scale);
	ClassDB::bind_method(D_METHOD("get_mouth_x_scale"), &MiiDataResource::get_mouth_x_scale);    
    ClassDB::bind_method(D_METHOD("set_mouth_y_scale", "mouth_y_scale"), &MiiDataResource::set_mouth_y_scale);
	ClassDB::bind_method(D_METHOD("get_mouth_y_scale"), &MiiDataResource::get_mouth_y_scale);    
    ClassDB::bind_method(D_METHOD("set_mouth_y_position", "mouth_y_position"), &MiiDataResource::set_mouth_y_position);
	ClassDB::bind_method(D_METHOD("get_mouth_y_position"), &MiiDataResource::get_mouth_y_position);    

    //Facial Hair
    ClassDB::bind_method(D_METHOD("set_beard_style", "beard_style"), &MiiDataResource::set_beard_style);
    ClassDB::bind_method(D_METHOD("get_beard_style"), &MiiDataResource::get_beard_style);    
    ClassDB::bind_method(D_METHOD("set_beard_color", "beard_color"), &MiiDataResource::set_beard_color);
	ClassDB::bind_method(D_METHOD("get_beard_color"), &MiiDataResource::get_beard_color);    
    ClassDB::bind_method(D_METHOD("set_mustache_style", "mustache_style"), &MiiDataResource::set_mustache_style);
	ClassDB::bind_method(D_METHOD("get_mustache_style"), &MiiDataResource::get_mustache_style);    
    ClassDB::bind_method(D_METHOD("set_mustache_scale", "mustache_scale"), &MiiDataResource::set_mustache_scale);
	ClassDB::bind_method(D_METHOD("get_mustache_scale"), &MiiDataResource::get_mustache_scale);    
    ClassDB::bind_method(D_METHOD("set_mustache_y_position", "mustache_y_position"), &MiiDataResource::set_mustache_y_position);
	ClassDB::bind_method(D_METHOD("get_mustache_y_position"), &MiiDataResource::get_mustache_y_position);    
	
    //Glasses
    ClassDB::bind_method(D_METHOD("set_glasses_style", "glasses_style"), &MiiDataResource::set_glasses_style);
    ClassDB::bind_method(D_METHOD("get_glasses_style"), &MiiDataResource::get_glasses_style);    
    ClassDB::bind_method(D_METHOD("set_glasses_color", "glasses_color"), &MiiDataResource::set_glasses_color);
	ClassDB::bind_method(D_METHOD("get_glasses_color"), &MiiDataResource::get_glasses_color);    
    ClassDB::bind_method(D_METHOD("set_glasses_scale", "glasses_scale"), &MiiDataResource::set_glasses_scale);
	ClassDB::bind_method(D_METHOD("get_glasses_scale"), &MiiDataResource::get_glasses_scale);    
    ClassDB::bind_method(D_METHOD("set_glasses_y_position", "glasses_y_position"), &MiiDataResource::set_glasses_y_position);
	ClassDB::bind_method(D_METHOD("get_glasses_y_position"), &MiiDataResource::get_glasses_y_position);    
	
    //Mole
    ClassDB::bind_method(D_METHOD("set_mole_scale", "mole_scale"), &MiiDataResource::set_mole_scale);
    ClassDB::bind_method(D_METHOD("get_mole_scale"), &MiiDataResource::get_mole_scale);    
    ClassDB::bind_method(D_METHOD("set_mole_x_position", "mole_x_position"), &MiiDataResource::set_mole_x_position);
	ClassDB::bind_method(D_METHOD("get_mole_x_position"), &MiiDataResource::get_mole_x_position);    
    ClassDB::bind_method(D_METHOD("set_mole_y_position", "mole_y_position"), &MiiDataResource::set_mole_y_position);
	ClassDB::bind_method(D_METHOD("get_mole_y_position"), &MiiDataResource::get_mole_y_position);
    //Fame Misc.

    ADD_GROUP("Meta", "");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "version", PROPERTY_HINT_RANGE, "0,3"), "set_version", "get_version");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "profanity"), "set_profanity", "get_profanity");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "region_lock", PROPERTY_HINT_ENUM, "None, Japan, USA, Europe"), "set_region_lock", "get_region_lock");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "char_set", PROPERTY_HINT_ENUM, "Japan/USA/Europe, China, Korea, Taiwan"), "set_char_set", "get_char_set");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "origin_device", PROPERTY_HINT_ENUM, "Wii, DS, 3DS, Wii U/Switch"), "set_origin_device", "get_origin_device");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mii_id"), "get_mii_id", "get_mii_id");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "creation_date"), "set_creation_date", "get_creation_date");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "dsi"), "set_dsi", "get_dsi");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "special"), "set_special", "get_special");
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "mac_address"), "set_mac_address", "get_mac_address");

    ADD_GROUP("General", "");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "sex", PROPERTY_HINT_ENUM, "Male, Female"), "set_sex", "get_sex");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "birthday_month"), "set_birthday_month", "get_birthday_month");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "birthday_day"), "set_birthday_day", "get_birthday_day");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "favorite_color"), "set_favorite_color", "get_favorite_color");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "favorite_mii"), "set_favorite_mii", "get_favorite_mii");
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "mii_name"), "set_mii_name", "get_mii_name");
    ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "width"), "set_width", "get_width");
    ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "height"), "set_height", "get_height");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "sharable"), "set_sharable", "get_sharable");
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "author"), "set_author", "get_author");

    ADD_GROUP("Face Misc.", "");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "face_shape"), "set_face_shape", "get_face_shape");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "skin_color"), "set_skin_color", "get_skin_color");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "wrinkles"), "set_wrinkles", "get_wrinkles");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "makeup"), "set_makeup", "get_makeup");

    ADD_GROUP("Hair", "");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "hair_style"), "set_hair_style", "get_hair_style");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "hair_color"), "set_hair_color", "get_hair_color");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "is_hair_flipped"), "set_hair_flip", "get_hair_flip");
    
    ADD_GROUP("Eyes", "");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eye_style"), "set_eye_style", "get_eye_style");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eye_color"), "set_eye_color", "get_eye_color");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eye_x_scale"), "set_eye_x_scale", "get_eye_x_scale");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eye_y_scale"), "set_eye_y_scale", "get_eye_y_scale");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eye_rotation"), "set_eye_rotation", "get_eye_rotation");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eye_x_spacing"), "set_eye_x_spacing", "get_eye_x_spacing");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eye_y_position"), "set_eye_y_position", "get_eye_y_position");

    ADD_GROUP("Eyebrows", "");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eyebrow_style"), "set_eyebrow_style", "get_eyebrow_style");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eyebrow_color"), "set_eyebrow_color", "get_eyebrow_color");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eyebrow_x_scale"), "set_eyebrow_x_scale", "get_eyebrow_x_scale");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eyebrow_y_scale"), "set_eyebrow_y_scale", "get_eyebrow_y_scale");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eyebrow_rotation"), "set_eyebrow_rotation", "get_eyebrow_rotation");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eyebrow_x_spacing"), "set_eyebrow_x_spacing", "get_eyebrow_x_spacing");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "eyebrow_y_position"), "set_eyebrow_y_position", "get_eyebrow_y_position");
    
    ADD_GROUP("Nose", "");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "nose_style"), "set_nose_style", "get_nose_style");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "nose_scale"), "set_nose_scale", "get_nose_scale");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "nose_y_position"), "set_nose_y_position", "get_nose_y_position");
    
    ADD_GROUP("Mouth", "");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mouth_style"), "set_mouth_style", "get_mouth_style");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mouth_color"), "set_mouth_color", "get_mouth_color");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mouth_x_scale"), "set_mouth_x_scale", "get_mouth_x_scale");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mouth_y_scale"), "set_mouth_y_scale", "get_mouth_y_scale");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mouth_y_position"), "set_mouth_y_position", "get_mouth_y_position");
    
    ADD_GROUP("Facial Hair", "");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "beard_style"), "set_beard_style", "get_beard_style");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "beard_color"), "set_beard_color", "get_beard_color");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mustache_style"), "set_mustache_style", "get_mustache_style");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mustache_scale"), "set_mustache_scale", "get_mustache_scale");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mustache_y_position"), "set_mustache_y_position", "get_mustache_y_position");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "glasses_style"), "set_glasses_style", "get_glasses_style");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "glasses_color"), "set_glasses_color", "get_glasses_color");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "glasses_scale"), "set_glasses_scale", "get_glasses_scale");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "glasses_y_position"), "set_glasses_y_position", "get_glasses_y_position");

    ADD_GROUP("Mole", "");
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "has_mole"), "set_has_mole", "get_has_mole");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mole_scale"), "set_mole_scale", "get_mole_scale");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mole_x_position"), "set_mole_x_position", "get_mole_x_position");
    ADD_PROPERTY(PropertyInfo(Variant::INT, "mole_y_position"), "set_mole_y_position", "get_mole_y_position");


}

