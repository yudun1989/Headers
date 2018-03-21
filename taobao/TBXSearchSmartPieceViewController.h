//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SmartPieceWXViewController;

@interface TBXSearchSmartPieceViewController : UIViewController
{
    _Bool _retainInstance;
    _Bool _displayState;
    long long _level;
    SmartPieceWXViewController *_wxViewController;
}

+ (void)init;
+ (id)currentViewController;
+ (void)start:(id)arg1;
+ (void)startWithURL:(id)arg1 viewController:(id)arg2;
+ (void)initialize;
@property(nonatomic) _Bool displayState; // @synthesize displayState=_displayState;
@property(retain, nonatomic) SmartPieceWXViewController *wxViewController; // @synthesize wxViewController=_wxViewController;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) _Bool retainInstance; // @synthesize retainInstance=_retainInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)fireGlobalEvent:(id)arg1 params:(id)arg2;
- (void)close;
- (void)hidden;
- (void)display;
- (void)setThresholdAlpha:(double)arg1;
- (void)initialize:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

