//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class UIViewController;
@protocol TBWebViewServiceProtocol;

@interface TBRateSubmitSuccessViewController : TBViewController
{
    UIViewController<TBWebViewServiceProtocol> *_webViewController;
}

@property(retain, nonatomic) UIViewController<TBWebViewServiceProtocol> *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)tbfestival_isFestivalEnable;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithQuery:(id)arg1;
- (void)toRateList;
- (void)showRateSuccessH5PageWithOrderId:(id)arg1 withSellerId:(id)arg2;
- (void)setNavBar;

@end

