//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DWPlayerLifecycleProtocol-Protocol.h"
#import "WeAppVideoHandlerProtocol-Protocol.h"

@class DWInstance, NSMutableSet, NSString, UIImageView, UIViewController, WeAppComponent;

@interface TBShopVideoHandler : NSObject <DWPlayerLifecycleProtocol, WeAppVideoHandlerProtocol>
{
    UIViewController *_viewController;
    DWInstance *_dwInstance;
    NSMutableSet *_components;
    WeAppComponent *_playingComponent;
    UIImageView *_coverView;
}

@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) WeAppComponent *playingComponent; // @synthesize playingComponent=_playingComponent;
@property(retain, nonatomic) NSMutableSet *components; // @synthesize components=_components;
@property(retain, nonatomic) DWInstance *dwInstance; // @synthesize dwInstance=_dwInstance;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)exposureForComponent:(id)arg1;
- (_Bool)isWifiNetwork;
- (id)selectComponentWithContainer:(id)arg1;
- (void)selectComponentToAutoPlay:(id)arg1;
- (void)stopVideo;
- (void)setAutoPlayModeForDWInstance:(id)arg1 view:(id)arg2;
- (void)prepareBeforeSetup:(id)arg1;
- (id)setUpInteractiveInfoWithComponent:(id)arg1;
- (id)setUpVideoInfoWithComponent:(id)arg1;
- (id)utArgsForComponent:(id)arg1;
- (id)getImageModuleType:(id)arg1;
- (void)setUpVideoWithComponent:(id)arg1;
- (void)addAutoPlayVideoComponent:(id)arg1;
- (void)addVideoIconForComponent:(id)arg1;
- (_Bool)isVideoComponent:(id)arg1;
- (_Bool)isPossibleVideoComponent:(id)arg1;
- (void)removeScrollObserver;
- (void)addScrollObserver;
- (void)scrollEnd:(id)arg1;
- (void)onVideoError:(id)arg1;
- (void)afterRenderPage:(id)arg1;
- (void)handleComponent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

