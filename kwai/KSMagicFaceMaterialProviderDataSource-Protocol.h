//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSMagicFaceMaterialProvider, KSMusicBeats, NSString, UIView;

@protocol KSMagicFaceMaterialProviderDataSource <NSObject>
- (CDStruct_1b6d18a9)timeOfCurrentPlayingMusicWithProvider:(KSMagicFaceMaterialProvider *)arg1;
- (KSMusicBeats *)beatsOfCurrentPlayingMusicWithProvider:(KSMagicFaceMaterialProvider *)arg1;
- (long long)getCurrentCameraPosition;
- (_Bool)shouldMirrorWithProvider:(KSMagicFaceMaterialProvider *)arg1;
- (float)videoFieldOfViewWithProvider:(KSMagicFaceMaterialProvider *)arg1;

@optional
- (_Bool)supportsCustomMakeup;
- (_Bool)supportsCustomBeautify;
- (struct CGSize)screenSize;
- (_Bool)shouldCaptureDepthVideo;
- (_Bool)shouldCaptureOriginalVideo;
- (NSString *)depthVideoPath;
- (NSString *)originalVideoPath;
- (UIView *)magicFaceContainerView;
@end

