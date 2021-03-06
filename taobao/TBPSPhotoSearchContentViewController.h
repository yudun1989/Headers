//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBPSBaseViewController.h"

#import "WXViewControllerProtocol-Protocol.h"

@class NSString, NSURL, TBPSAdapterWebViewController, TBPSSearchBar, UIScrollView, WXViewController;

@interface TBPSPhotoSearchContentViewController : TBPSBaseViewController <WXViewControllerProtocol>
{
    _Bool _isDegradeToH5;
    TBPSSearchBar *_searchBar;
    WXViewController *_WXViewController;
    TBPSAdapterWebViewController *_WVViewController;
    UIScrollView *_scrollView;
    NSURL *_url;
    id _delegate;
    NSString *_weexURL;
    NSString *_h5URL;
}

@property(retain, nonatomic) NSString *h5URL; // @synthesize h5URL=_h5URL;
@property(retain, nonatomic) NSString *weexURL; // @synthesize weexURL=_weexURL;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool isDegradeToH5; // @synthesize isDegradeToH5=_isDegradeToH5;
@property(readonly, nonatomic) TBPSAdapterWebViewController *WVViewController; // @synthesize WVViewController=_WVViewController;
@property(readonly, nonatomic) WXViewController *WXViewController; // @synthesize WXViewController=_WXViewController;
@property(readonly, nonatomic) TBPSSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateTopbarStyle:(id)arg1;
- (void)layoutSubviews;
- (void)wxDegradeToH5:(id)arg1;
- (void)wxFinishRenderInstance;
- (void)wxFailCreateInstance;
- (void)wxFinishCreateInstance;
- (void)stopLoading;
- (void)contentViewDidLoadResult:(id)arg1;
- (void)contentViewDidLoadTimeout;
- (void)clearContent;
- (void)didLoadFailedWithError:(id)arg1;
- (void)findScrollViewsInView:(id)arg1;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)fireEvent:(id)arg1 params:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)cancel:(id)arg1;
- (void)reloadWXViewController;
- (void)reloadContent;
- (void)registerWVPlugins;
- (void)reloadWVViewController;
- (void)search:(id)arg1;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

