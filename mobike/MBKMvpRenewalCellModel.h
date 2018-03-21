//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKViewModelProtocol-Protocol.h"

@class NSString, UIColor;

@interface MBKMvpRenewalCellModel : NSObject <MBKViewModelProtocol>
{
    _Bool _rechargeButtonEnable;
    NSString *_titleString;
    NSString *_balanceString;
    NSString *_rechargeString;
    NSString *_promptFontSize;
    UIColor *_buttonTextcolor;
    UIColor *_buttonColor;
    unsigned long long _classify;
    unsigned long long _status;
}

@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long classify; // @synthesize classify=_classify;
@property(nonatomic) _Bool rechargeButtonEnable; // @synthesize rechargeButtonEnable=_rechargeButtonEnable;
@property(retain, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(retain, nonatomic) UIColor *buttonTextcolor; // @synthesize buttonTextcolor=_buttonTextcolor;
@property(copy, nonatomic) NSString *promptFontSize; // @synthesize promptFontSize=_promptFontSize;
@property(copy, nonatomic) NSString *rechargeString; // @synthesize rechargeString=_rechargeString;
@property(copy, nonatomic) NSString *balanceString; // @synthesize balanceString=_balanceString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (Class)viewClass;
@property(readonly, nonatomic) double viewHeight;
@property(readonly, nonatomic) double viewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

