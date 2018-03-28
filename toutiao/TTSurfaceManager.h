//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, TTSurfaceItem;

@interface TTSurfaceManager : NSObject
{
    _Bool _settingSuccess;
    _Bool _hadSendTrackForSettingCheck;
    NSString *_surfaceVersion;
    NSDictionary *_surfaceDict;
    TTSurfaceItem *_currentItem;
    NSNumber *_hasSendTrackForStartUpSurface;
}

+ (void)saveSurfaceItemWithImage:(id)arg1 index:(long long)arg2;
+ (void)saveSurfaceItemDict:(id)arg1 index:(long long)arg2;
+ (void)updateTopBarImageForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)updateSurfaceItemBackImageWithItem:(id)arg1;
+ (void)downloadSurfaceItemImagesWithDict:(id)arg1 complection:(CDUnknownBlockType)arg2;
+ (void)setSurfaceSettingsDict:(id)arg1;
+ (void)setResurfaceGuideWeakDisable:(_Bool)arg1;
+ (_Bool)resurfaceGuideWeakDisable;
+ (void)disableResurfaceIconRefreshAnimation;
+ (_Bool)needShowResurfaceIconRefreshAnimation;
+ (void)switchSurfaceItemWithItem:(id)arg1;
+ (_Bool)currentSurfaceItemIsCustomed;
+ (id)topBarImage;
+ (id)tabbarColor;
+ (id)categoryBarColor;
+ (id)currentSurfaceColor;
+ (id)currentAllSurfaceItems;
+ (_Bool)resurfaceEnable;
+ (id)sharedInstance_tt;
+ (void)setup;
@property(retain, nonatomic) NSNumber *hasSendTrackForStartUpSurface; // @synthesize hasSendTrackForStartUpSurface=_hasSendTrackForStartUpSurface;
@property(nonatomic) _Bool hadSendTrackForSettingCheck; // @synthesize hadSendTrackForSettingCheck=_hadSendTrackForSettingCheck;
@property(nonatomic) _Bool settingSuccess; // @synthesize settingSuccess=_settingSuccess;
@property(retain, nonatomic) TTSurfaceItem *currentItem; // @synthesize currentItem=_currentItem;
@property(copy, nonatomic) NSDictionary *surfaceDict; // @synthesize surfaceDict=_surfaceDict;
@property(copy, nonatomic) NSString *surfaceVersion; // @synthesize surfaceVersion=_surfaceVersion;
- (void).cxx_destruct;
- (id)defaultSurfaceConfig;
- (long long)currentItemIndex;
- (void)sendTrackForStartUpSurface;
- (void)resurfaceSettingUpdateNotification:(id)arg1;
- (id)dictForIndex:(long long)arg1;
- (id)itemWithIndex:(long long)arg1;
- (void)switchSurfaceItemWithItem:(id)arg1;
- (_Bool)currentSurfaceItemIsCustomed;
- (id)topBarImage;
- (id)tabbarColor;
- (id)categoryBarColor;
- (id)currentSurfaceColor;
- (id)currentAllSurfaceItems;
- (id)init;
- (void)dealloc;

@end

