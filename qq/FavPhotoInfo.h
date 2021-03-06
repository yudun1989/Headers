//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FavPicInfo, NSString;

@interface FavPhotoInfo : NSObject
{
    FavPicInfo *_picInfo;
    NSString *_thumbUrl;
    NSString *_defaultPhotoPath;
    unsigned long long _favId;
    int _xo;
}

- (void)dealloc;
- (id)initWithPicInfo:(id)arg1 favId:(unsigned long long)arg2 thumbSize:(int)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *defaultPhotoPath; // @dynamic defaultPhotoPath;
@property(nonatomic) unsigned long long favId; // @dynamic favId;
@property(retain, nonatomic) FavPicInfo *picInfo; // @dynamic picInfo;
@property(copy, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;

@end

