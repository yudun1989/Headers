//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliDetailMultimediaViewControlProtocol-Protocol.h"
#import "TBMagicCubeLifeCycleProtocol-Protocol.h"

@class AliDetailBeautyEffectsDisplayView, AliDetailBeautyEffectsModel, AliDetailMultimediaBrowserViewControllerBase, NSString;

@interface AliDetailBeautyEffectsViewControl : NSObject <AliDetailMultimediaViewControlProtocol, TBMagicCubeLifeCycleProtocol>
{
    _Bool _isAppearing;
    AliDetailBeautyEffectsModel *_beautyEffectsModel;
    AliDetailBeautyEffectsDisplayView *_beautyContainerView;
    AliDetailMultimediaBrowserViewControllerBase *_bigBrowserVC;
    CDUnknownBlockType _beautyEffectsDownloadCompletion;
    CDUnknownBlockType _dataSourceDownloadCompletion;
}

@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(copy, nonatomic) CDUnknownBlockType dataSourceDownloadCompletion; // @synthesize dataSourceDownloadCompletion=_dataSourceDownloadCompletion;
@property(copy, nonatomic) CDUnknownBlockType beautyEffectsDownloadCompletion; // @synthesize beautyEffectsDownloadCompletion=_beautyEffectsDownloadCompletion;
@property(nonatomic) __weak AliDetailMultimediaBrowserViewControllerBase *bigBrowserVC; // @synthesize bigBrowserVC=_bigBrowserVC;
@property(retain, nonatomic) AliDetailBeautyEffectsDisplayView *beautyContainerView; // @synthesize beautyContainerView=_beautyContainerView;
@property(retain, nonatomic) AliDetailBeautyEffectsModel *beautyEffectsModel; // @synthesize beautyEffectsModel=_beautyEffectsModel;
- (void).cxx_destruct;
- (void)exposureClickUserTrack;
- (id)getMaskImageViewForBigPhotoBrowser;
- (void)downloadFailedWithError:(id)arg1;
- (void)downloadFinished:(id)arg1;
- (void)downloadDataSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetForMultiMediaFromBigBrowser;
- (void)reuseForBigBrowserFromMultiMedia;
- (void)setupContent;
- (void)dealloc;
- (void)viewDidUnload:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad:(_Bool)arg1;
- (id)getComponentView;
- (void)bindData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

