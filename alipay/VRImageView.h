//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VRView.h"

@class NSString, UIImage;

@interface VRImageView : VRView
{
    _Bool _imageLoaded;
    UIImage *_image;
    UIImage *_highlightedImage;
    NSString *_imageUrl;
    NSString *_clientID;
    UIImage *_placeholder;
    unsigned long long _radius;
    struct CGSize _zoom;
}

+ (id)createCircleImage:(id)arg1 size:(struct CGSize)arg2 radius:(long long)arg3;
+ (id)getRealUrl:(id)arg1 zoom:(struct CGSize)arg2;
+ (id)getImageRequest:(int)arg1 isRequestCache:(_Bool)arg2 cacheType:(int)arg3;
@property(nonatomic) struct CGSize zoom; // @synthesize zoom=_zoom;
@property(nonatomic) unsigned long long radius; // @synthesize radius=_radius;
@property(copy) UIImage *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(readonly) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)drawImage:(id)arg1;
- (struct CGRect)imageDrawRect:(id)arg1;
- (_Bool)highlightDrawEnabel;
- (void)drawWithContext:(struct CGContext *)arg1 isCancelled:(CDUnknownBlockType)arg2;
- (void)bindView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setImageRequest:(id)arg1 dealType:(int)arg2;
- (void)bindImage:(id)arg1 realId:(id)arg2 radius:(unsigned long long)arg3 compelete:(CDUnknownBlockType)arg4;
- (void)dealCircleImage:(id)arg1 dealType:(int)arg2 aliasIdentifier:(id)arg3 radius:(unsigned long long)arg4 business:(id)arg5 zoom:(struct CGSize)arg6 realSize:(struct CGSize)arg7 realId:(id)arg8 cacheIdentifer:(id)arg9 compelete:(CDUnknownBlockType)arg10;
- (void)setImageWithIdentifer:(id)arg1 business:(id)arg2 bizType:(id)arg3 aliasIdentifier:(id)arg4 placeholderImage:(id)arg5 zoom:(struct CGSize)arg6 realSize:(struct CGSize)arg7 radius:(unsigned long long)arg8 dealType:(int)arg9 qualityValue:(unsigned long long)arg10 isSyncLoadCatch:(_Bool)arg11 progress:(CDUnknownBlockType)arg12 compelete:(CDUnknownBlockType)arg13;
- (void)setImageWithIdentifer:(id)arg1 business:(id)arg2 aliasIdentifier:(id)arg3 placeholderImage:(id)arg4 zoom:(struct CGSize)arg5 realSize:(struct CGSize)arg6 radius:(unsigned long long)arg7 dealType:(int)arg8 qualityValue:(unsigned long long)arg9 isSyncLoadCatch:(_Bool)arg10 progress:(CDUnknownBlockType)arg11 compelete:(CDUnknownBlockType)arg12;

@end

