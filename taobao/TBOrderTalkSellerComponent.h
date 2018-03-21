//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderComponent.h"

@class NSMutableArray, TBOrderUnitTemplate;

@interface TBOrderTalkSellerComponent : TBOrderComponent
{
    TBOrderUnitTemplate *_ww;
    TBOrderUnitTemplate *_phone;
    TBOrderUnitTemplate *_otherWay;
    NSMutableArray *_operateList;
}

@property(retain, nonatomic) NSMutableArray *operateList; // @synthesize operateList=_operateList;
@property(retain, nonatomic) TBOrderUnitTemplate *otherWay; // @synthesize otherWay=_otherWay;
@property(retain, nonatomic) TBOrderUnitTemplate *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) TBOrderUnitTemplate *ww; // @synthesize ww=_ww;
- (void).cxx_destruct;
- (id)talkOtherWay;
- (id)talkPhone;
- (id)talkWW;
- (void)initOperateList;
- (id)values;
- (id)initWithData:(id)arg1;

@end

