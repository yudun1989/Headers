//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewController.h>

@interface APMidasBalanceH5ViewController : QQWebViewController
{
    _Bool query;
}

+ (id)getUrlWithReq:(id)arg1 query:(_Bool)arg2 balance:(id)arg3;
+ (id)controllerWithReq:(id)arg1 query:(_Bool)arg2 balance:(id)arg3;
- (void)reSetLeftButtonTitle;
- (void)rightCloseBtnClicked:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

