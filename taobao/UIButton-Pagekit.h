//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImage;

@interface UIButton (Pagekit)
@property(retain, nonatomic) NSString *forbidKeepImage;
@property(retain, nonatomic) UIImage *placeHolderImage;
@property(retain, nonatomic) NSString *placeHolderImageName;
@property(retain, nonatomic) NSString *forbidWeakNetOptimize;
@property(retain, nonatomic) NSString *actionParam;
@property(retain, nonatomic) NSString *actionName;
@property(retain, nonatomic) NSString *actionExcutorUrl;
@property(retain, nonatomic) NSString *localDocImageName;
@property(retain, nonatomic) NSString *bundleImageName;
@property(retain, nonatomic) NSString *imageUrl;
@property(retain, nonatomic) NSString *borderColor;
@property(retain, nonatomic) NSString *borderWidth;
@property(retain, nonatomic) NSString *cornerRadius;
- (void)willMoveToWindow:(id)arg1;
- (void)reportImageLoadState:(_Bool)arg1 error:(id)arg2 withModuleFlag:(id)arg3;
- (_Bool)hasImageLoadFailed;
- (void)setHasImageLoadFailed:(_Bool)arg1;
- (void)loadHistroyImageWithTag:(id)arg1;
- (id)cachedImageForUrl:(id)arg1;
- (id)parsedUrl:(id)arg1;
- (void)downloadWithUrl:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)downloadWithUrl:(id)arg1 completed:(CDUnknownBlockType)arg2 inBackground:(_Bool)arg3;
- (void)setButtonImage:(id)arg1;
- (void)loadImageWithUrl:(id)arg1 tag:(id)arg2 completeBlock:(CDUnknownBlockType)arg3 async:(_Bool)arg4;
- (id)cachedLastImageForTag:(id)arg1 imageUrlString:(id)arg2 needDownload:(_Bool *)arg3;
- (id)cachedCurrentImageForParsedUrl:(id)arg1;
- (_Bool)isInFirstScreen:(id)arg1;
@end

