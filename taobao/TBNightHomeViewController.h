//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBWVBaseController.h"

@class NSString, TBNightLoadingView, UIButton;

@interface TBNightHomeViewController : TBWVBaseController
{
    NSString *_urlQuery;
    TBNightLoadingView *_loadingView;
    UIButton *_closeButton;
    CDUnknownBlockType _exitBlock;
}

+ (void)downloadCompletion:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType exitBlock; // @synthesize exitBlock=_exitBlock;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) TBNightLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy) NSString *urlQuery; // @synthesize urlQuery=_urlQuery;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showErrorView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)showCloseBotton:(_Bool)arg1;
- (void)showLoading:(_Bool)arg1;
- (void)exitNightHomeViewController;
- (void)showLoadingBoxWithTitle:(id)arg1;
- (void)showLoadingBox;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

@end

