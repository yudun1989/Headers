//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UICustomNaviBarViewController.h>

#import <QQMainProject/TenpaySecureCtrlDelegate-Protocol.h>

@class CFT_TenpayPswCtrl, CFT_UIGroupStyleView, NSString, UIButton, UILabel, UIScrollView;

@interface CFT_UIDeleteCardPswViewController : CFT_UICustomNaviBarViewController <TenpaySecureCtrlDelegate>
{
    UIScrollView *pScrollView_;
    UILabel *pLabWarn;
    CFT_UIGroupStyleView *group;
    CFT_TenpayPswCtrl *pUserPW_;
    UIButton *finishButton;
    _Bool is6Psw;
    NSString *bankType;
    NSString *bindSerial;
}

@property(nonatomic) _Bool is6Psw; // @synthesize is6Psw;
@property(retain, nonatomic) NSString *bindSerial; // @synthesize bindSerial;
@property(retain, nonatomic) NSString *bankType; // @synthesize bankType;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

