//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class KSDiskCache, KS_user_info, NSNumber, NSString;

@interface KSABTestConfig : NSObject <NSCopying>
{
    KSDiskCache *_cache;
    KS_user_info *_user;
    _Bool _expired;
    NSNumber *_verifyDoubleValue;
    NSNumber *_videoSoftEncodeSeconds;
    NSNumber *_feedPadding;
    NSNumber *_coverPreviewPreRender;
    NSNumber *_liveChatEncodeType;
    NSNumber *_liveChatDecodeType;
    NSNumber *_videoMillisShort;
    NSNumber *_anrMonitor;
    NSNumber *_profileBrowsingEfficiency;
    NSNumber *_enablePhotoDetailDrag;
    NSString *_livePlayerBufferParameter;
    NSNumber *_noSpaceInWatcherList;
    NSNumber *_videoPrepareSize;
    NSNumber *_videoSegmentDownload;
    NSNumber *_enableBatchGiftZeroLevelSplit;
    NSNumber *_h265PlayOn;
    NSString *_h265DecoderName;
    NSNumber *_photoPopupWindowOn;
    NSNumber *_enableIdcSpeedTestCrossPlatformStrategy;
    NSNumber *_enableFastPush;
    NSNumber *_enableCommentBarAlwaysShow;
    NSNumber *_enableFaceMagicToLinesV2;
    NSNumber *_showNewPhotoToolbarIcon;
    NSNumber *_disablePrefetch;
    NSNumber *_noPrefetchTimeMs;
    NSNumber *_prefetch;
    NSNumber *_enablePhotoPicker4Ios;
    NSNumber *_fineControlBeautyEnabled;
    NSNumber *_fineControlBeautyEnabledForLive;
    NSNumber *_liveIconLayoutStyle;
    NSNumber *_slideDisplayType;
    NSNumber *_slideBackEndPlan;
}

+ (id)currentTestConfig;
+ (_Bool)shouldDisplayInMultipleLines;
@property(retain, nonatomic) NSNumber *slideBackEndPlan; // @synthesize slideBackEndPlan=_slideBackEndPlan;
@property(retain, nonatomic) NSNumber *slideDisplayType; // @synthesize slideDisplayType=_slideDisplayType;
@property(retain, nonatomic) NSNumber *liveIconLayoutStyle; // @synthesize liveIconLayoutStyle=_liveIconLayoutStyle;
@property(retain, nonatomic) NSNumber *fineControlBeautyEnabledForLive; // @synthesize fineControlBeautyEnabledForLive=_fineControlBeautyEnabledForLive;
@property(retain, nonatomic) NSNumber *fineControlBeautyEnabled; // @synthesize fineControlBeautyEnabled=_fineControlBeautyEnabled;
@property(retain, nonatomic) NSNumber *enablePhotoPicker4Ios; // @synthesize enablePhotoPicker4Ios=_enablePhotoPicker4Ios;
@property(retain, nonatomic) NSNumber *prefetch; // @synthesize prefetch=_prefetch;
@property(retain, nonatomic) NSNumber *noPrefetchTimeMs; // @synthesize noPrefetchTimeMs=_noPrefetchTimeMs;
@property(retain, nonatomic) NSNumber *disablePrefetch; // @synthesize disablePrefetch=_disablePrefetch;
@property(retain, nonatomic) NSNumber *showNewPhotoToolbarIcon; // @synthesize showNewPhotoToolbarIcon=_showNewPhotoToolbarIcon;
@property(retain, nonatomic) NSNumber *enableFaceMagicToLinesV2; // @synthesize enableFaceMagicToLinesV2=_enableFaceMagicToLinesV2;
@property(retain, nonatomic) NSNumber *enableCommentBarAlwaysShow; // @synthesize enableCommentBarAlwaysShow=_enableCommentBarAlwaysShow;
@property(retain, nonatomic) NSNumber *enableFastPush; // @synthesize enableFastPush=_enableFastPush;
@property(retain, nonatomic) NSNumber *enableIdcSpeedTestCrossPlatformStrategy; // @synthesize enableIdcSpeedTestCrossPlatformStrategy=_enableIdcSpeedTestCrossPlatformStrategy;
@property(retain, nonatomic) NSNumber *photoPopupWindowOn; // @synthesize photoPopupWindowOn=_photoPopupWindowOn;
@property(copy, nonatomic) NSString *h265DecoderName; // @synthesize h265DecoderName=_h265DecoderName;
@property(retain, nonatomic) NSNumber *h265PlayOn; // @synthesize h265PlayOn=_h265PlayOn;
@property(retain, nonatomic) NSNumber *enableBatchGiftZeroLevelSplit; // @synthesize enableBatchGiftZeroLevelSplit=_enableBatchGiftZeroLevelSplit;
@property(retain, nonatomic) NSNumber *videoSegmentDownload; // @synthesize videoSegmentDownload=_videoSegmentDownload;
@property(retain, nonatomic) NSNumber *videoPrepareSize; // @synthesize videoPrepareSize=_videoPrepareSize;
@property(retain, nonatomic) NSNumber *noSpaceInWatcherList; // @synthesize noSpaceInWatcherList=_noSpaceInWatcherList;
@property(retain, nonatomic) NSString *livePlayerBufferParameter; // @synthesize livePlayerBufferParameter=_livePlayerBufferParameter;
@property(retain, nonatomic) NSNumber *enablePhotoDetailDrag; // @synthesize enablePhotoDetailDrag=_enablePhotoDetailDrag;
@property(retain, nonatomic) NSNumber *profileBrowsingEfficiency; // @synthesize profileBrowsingEfficiency=_profileBrowsingEfficiency;
@property(retain, nonatomic) NSNumber *anrMonitor; // @synthesize anrMonitor=_anrMonitor;
@property(retain, nonatomic) NSNumber *videoMillisShort; // @synthesize videoMillisShort=_videoMillisShort;
@property(retain, nonatomic) NSNumber *liveChatDecodeType; // @synthesize liveChatDecodeType=_liveChatDecodeType;
@property(retain, nonatomic) NSNumber *liveChatEncodeType; // @synthesize liveChatEncodeType=_liveChatEncodeType;
@property(retain, nonatomic) NSNumber *coverPreviewPreRender; // @synthesize coverPreviewPreRender=_coverPreviewPreRender;
@property(retain, nonatomic) NSNumber *feedPadding; // @synthesize feedPadding=_feedPadding;
@property(retain, nonatomic) NSNumber *videoSoftEncodeSeconds; // @synthesize videoSoftEncodeSeconds=_videoSoftEncodeSeconds;
@property(retain, nonatomic) NSNumber *verifyDoubleValue; // @synthesize verifyDoubleValue=_verifyDoubleValue;
- (void).cxx_destruct;
- (void)preprocessABTestConfig:(id)arg1;
- (void)refresh;
- (void)setDefaultValues;
- (void)restoreConfig;
- (id)initWithUser:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

