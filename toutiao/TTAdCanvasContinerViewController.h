//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTRouteInitializeProtocol-Protocol.h"

@class NSString, TTAdCanvasContainerViewModel, UIView;
@protocol TTAdCanvasViewController;

@interface TTAdCanvasContinerViewController : SSViewControllerBase <TTRouteInitializeProtocol>
{
    TTAdCanvasContainerViewModel *_containerViewModel;
    SSViewControllerBase<TTAdCanvasViewController> *_detailViewController;
    UIView *_shotScreenView;
}

+ (void)load;
@property(retain, nonatomic) UIView *shotScreenView; // @synthesize shotScreenView=_shotScreenView;
@property(retain, nonatomic) SSViewControllerBase<TTAdCanvasViewController> *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) TTAdCanvasContainerViewModel *containerViewModel; // @synthesize containerViewModel=_containerViewModel;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)didReceiveMemoryWarning;
- (void)refreshDetailViewControllerViewFrameIfNeeded;
- (void)addDetailVC:(id)arg1;
- (void)constructDetailViewController:(id *)arg1;
- (void)viewDidLoad;
- (id)initWithRouteParamObj:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

