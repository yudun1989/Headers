//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UIEnteringView, UIViewController;

@interface CFT_UIStartVerifyPasswordLoadingView : UIView <UIAlertViewDelegate>
{
    UIEnteringView *_enteringView;
    _Bool _finished;
    NSMutableDictionary *_param;
    UIViewController *_rootVC;
}

+ (void)destroyInstance;
+ (id)sharedInstance;
@property(nonatomic) UIViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) NSMutableDictionary *param; // @synthesize param=_param;
- (_Bool)isSupportRightDragToGoBack;
- (void)dismiss:(id)arg1;
- (void)dealloc;
- (void)clear;
- (void)onDataReady:(id)arg1 DataInfo:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

