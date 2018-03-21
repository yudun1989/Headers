//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface KSTagShareContent : NSObject
{
    _Bool _ignorePhotosInURL;
    unsigned long long _type;
    NSString *_tag;
    NSString *_detail;
    NSArray *_thumbnailCDNs;
    NSString *_thumbnailURL;
    UIImage *_thumbnailImage;
    NSArray *_photos;
    NSString *_poiId;
    NSString *_musicId;
    NSString *_musicType;
    NSString *_ussid;
    NSString *_magicFaceId;
    NSString *_magicName;
}

@property(retain, nonatomic) NSString *magicName; // @synthesize magicName=_magicName;
@property(retain, nonatomic) NSString *magicFaceId; // @synthesize magicFaceId=_magicFaceId;
@property(retain, nonatomic) NSString *ussid; // @synthesize ussid=_ussid;
@property(retain, nonatomic) NSString *musicType; // @synthesize musicType=_musicType;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(retain, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(nonatomic) _Bool ignorePhotosInURL; // @synthesize ignorePhotosInURL=_ignorePhotosInURL;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) NSString *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) NSArray *thumbnailCDNs; // @synthesize thumbnailCDNs=_thumbnailCDNs;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)anyThumbnailURL;
- (id)shareDetail;
- (id)shareTitle;
- (id)displayTag;
- (id)_shareURLWithIsShort:(_Bool)arg1;
- (id)shortShareURL;
- (id)shareURL;

@end

