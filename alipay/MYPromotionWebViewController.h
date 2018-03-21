//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MYPromotionViewController.h"

#import "H5ServiceDelegate-Protocol.h"

@class H5WebViewController, MYPromotionTrackingService, NSString;

@interface MYPromotionWebViewController : MYPromotionViewController <H5ServiceDelegate>
{
    H5WebViewController *_webViewController;
    MYPromotionTrackingService *_trackingService;
}

@property(retain, nonatomic) MYPromotionTrackingService *trackingService; // @synthesize trackingService=_trackingService;
@property(retain, nonatomic) H5WebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (void)operateViews:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setModalThreshold:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)increaseTimes:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)close:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)display:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)registerPlugins;
- (void)promotionDidHide;
- (void)promotionDidShow;
- (id)contentViewController;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)viewDidLoad;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
