//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveWebViewLoader.h"

@class UIViewController;

@interface TBLiveWeexWebViewLoader : TBLiveWebViewLoader
{
    UIViewController *_vc;
}

@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)webViewRenderFailed:(id)arg1;
- (void)webViewRenderSuccess:(id)arg1;
- (void)webViewDidCreated:(id)arg1;
- (void)bringWebViewToFront:(id)arg1;
- (void)pushLiveInactiveEvent:(id)arg1;
- (void)pushLiveActiveEvent:(id)arg1;
- (void)pushContainerHideEvent:(id)arg1;
- (void)pushContainerShowEvent:(id)arg1;
- (void)pushScreenFlippedEvent:(id)arg1;
- (void)pushMediaPlayerEvent:(id)arg1 data:(id)arg2;
- (void)pushActionReportEvent:(id)arg1;
- (void)pushScreenOrientationEvent:(id)arg1;
- (void)pushMediaEvent:(id)arg1;
- (void)pushMessageEvent:(id)arg1;
- (void)dealloc;
- (void)loadUrl:(id)arg1 withModel:(id)arg2 withVC:(id)arg3;

@end

