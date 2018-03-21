//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALPCell.h"

#import "ALPFundScrollCellProtocol-Protocol.h"
#import "ALPTextDelegate-Protocol.h"

@class NSNumberFormatter, NSString, UIControl, WWCountingLabel;
@protocol ALPCellDidClick;

@interface ALPFundCommonCell : ALPCell <ALPFundScrollCellProtocol, ALPTextDelegate>
{
    NSNumberFormatter *_rateFormatter;
    UIControl *_topLeftControl;
    UIControl *_topRightControl;
    WWCountingLabel *_leftTop;
    WWCountingLabel *_rightTop;
    id <ALPCellDidClick> _clickDelegate;
}

@property(nonatomic) __weak id <ALPCellDidClick> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
@property(retain, nonatomic) WWCountingLabel *rightTop; // @synthesize rightTop=_rightTop;
@property(retain, nonatomic) WWCountingLabel *leftTop; // @synthesize leftTop=_leftTop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (double)cellHeight;
- (void)cellFinishAppear;
- (void)cellFinishDisappear;
- (void)cellStartToAppear:(id)arg1;
- (id)formatNumber:(id)arg1 number:(id)arg2;
- (void)updateTopLeft:(id)arg1 topRight:(id)arg2;
- (void)startAnimation;
- (void)didClickControl:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

