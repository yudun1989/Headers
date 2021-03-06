//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSImageAsset.h"

@class NSArray, NSString;

@interface KSRoundedImageAsset : KSImageAsset
{
    NSArray *_CDNUrls;
    NSString *_url;
    _Bool _opportunistic;
    struct CGSize _imageSize;
}

+ (id)cachedKeyForCDN:(id)arg1 url:(id)arg2;
@property(nonatomic) _Bool opportunistic; // @synthesize opportunistic=_opportunistic;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (void)loadImageOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCDNUrls:(id)arg1 url:(id)arg2 pageURL:(id)arg3;
- (id)initWithAssetProvider:(CDUnknownBlockType)arg1;
- (id)didLoadImage:(id)arg1 fromSource:(unsigned long long)arg2;
- (id)initWithUser:(id)arg1;

@end

