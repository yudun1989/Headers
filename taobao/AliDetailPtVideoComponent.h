//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliProductDetailComponent.h"

#import "AliDetailMultimediaBrowserViewControllerBaseDelegate-Protocol.h"
#import "AliDetailVideoPlayerViewDelegate-Protocol.h"

@class AliDetailPtVideoComponentModel, AliDetailVideoBaseControl, AliDetailVideoManager, AliProductDetailVideoControl, NSString, UIView;

@interface AliDetailPtVideoComponent : AliProductDetailComponent <AliDetailVideoPlayerViewDelegate, AliDetailMultimediaBrowserViewControllerBaseDelegate>
{
    AliDetailPtVideoComponentModel *_videoModel;
    AliProductDetailVideoControl *_videoControl;
    double _titleHeight;
    UIView *_videoView;
    AliDetailVideoBaseControl *_browserDeliverControl;
    AliDetailVideoManager *_videoManager;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(nonatomic) __weak AliDetailVideoManager *videoManager; // @synthesize videoManager=_videoManager;
@property(nonatomic) __weak AliDetailVideoBaseControl *browserDeliverControl; // @synthesize browserDeliverControl=_browserDeliverControl;
@property(nonatomic) __weak UIView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(retain, nonatomic) AliProductDetailVideoControl *videoControl; // @synthesize videoControl=_videoControl;
@property(retain, nonatomic) AliDetailPtVideoComponentModel *videoModel; // @synthesize videoModel=_videoModel;
- (void).cxx_destruct;
- (void)photoBrowserWillDismiss:(id)arg1 imageInfo:(id)arg2;
- (id)createBrowserDataSource;
- (id)createVideoControl;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

