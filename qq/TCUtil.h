//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TCUtil : NSObject
{
}

+ (id)URLDecodedString:(id)arg1;
+ (id)URLEncodedString:(id)arg1;
+ (int)randomNumberFrom:(int)arg1 withCount:(unsigned long long)arg2;
+ (id)imageNamedFromLocalTemplate:(id)arg1;
+ (id)imagesNamedFromCustomBundle:(id)arg1;
+ (id)imageNamed:(id)arg1 inDirectory:(id)arg2;
+ (id)MD5Hash:(id)arg1;
+ (id)HexStrFromBuff:(const char *)arg1 length:(int)arg2;
+ (id)ShadowForColor:(id)arg1;
+ (id)ColorWithARGB:(unsigned int)arg1;
+ (id)ColorWithRGBA:(unsigned int)arg1;
+ (unsigned int)Color32BitValFromHexStr:(id)arg1;
+ (_Bool)isHttpLink:(id)arg1;

@end

