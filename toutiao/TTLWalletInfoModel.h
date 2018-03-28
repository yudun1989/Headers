//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString, TTLGiftOrderModel;

@interface TTLWalletInfoModel : MTLModel <MTLJSONSerializing>
{
    NSString *_diamond;
    NSString *_money;
    NSString *_timeStamp;
    NSString *_fanPiao;
    NSString *_consume;
    TTLGiftOrderModel *_recentOrder;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) TTLGiftOrderModel *recentOrder; // @synthesize recentOrder=_recentOrder;
@property(readonly, copy, nonatomic) NSString *consume; // @synthesize consume=_consume;
@property(readonly, copy, nonatomic) NSString *fanPiao; // @synthesize fanPiao=_fanPiao;
@property(readonly, copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, copy, nonatomic) NSString *money; // @synthesize money=_money;
@property(copy, nonatomic) NSString *diamond; // @synthesize diamond=_diamond;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

