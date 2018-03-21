//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;
@protocol BEEAssetProtocol;

@interface APIPImageObj : NSObject
{
    _Bool _uploading;
    _Bool _hasToTryUploadImage;
    NSString *_cloudId;
    UIImage *_image;
    id <BEEAssetProtocol> _asset;
    UIImage *_thumbImage;
}

@property(nonatomic) _Bool hasToTryUploadImage; // @synthesize hasToTryUploadImage=_hasToTryUploadImage;
@property(nonatomic) _Bool uploading; // @synthesize uploading=_uploading;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) id <BEEAssetProtocol> asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
- (void).cxx_destruct;

@end

