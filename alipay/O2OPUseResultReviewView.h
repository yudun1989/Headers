//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "O2ODynamicProtocol-Protocol.h"
#import "O2OEmoticonRateViewDelegate-Protocol.h"

@class NSString, O2OEmoticonRateView;

@interface O2OPUseResultReviewView : UIView <O2OEmoticonRateViewDelegate, O2ODynamicProtocol>
{
    O2OEmoticonRateView *_rateView;
    NSString *_shopId;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) O2OEmoticonRateView *rateView; // @synthesize rateView=_rateView;
- (void).cxx_destruct;
- (void)setConfig:(id)arg1 children:(id)arg2 item:(id)arg3;
- (void)emoticonRateView:(id)arg1 rateLevelDidChange:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

