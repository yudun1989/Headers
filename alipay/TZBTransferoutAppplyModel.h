//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TZBTransferChannelModel;

@interface TZBTransferoutAppplyModel : NSObject
{
    TZBTransferChannelModel *_fromChannel;
    TZBTransferChannelModel *_toChannel;
    NSString *_totalAmount;
    NSString *_totalAmountText;
    NSString *_limitAmount;
    NSString *_limitAmountText;
    NSString *_uuid;
    NSString *_dayLimit;
}

@property(retain, nonatomic) NSString *dayLimit; // @synthesize dayLimit=_dayLimit;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *limitAmountText; // @synthesize limitAmountText=_limitAmountText;
@property(retain, nonatomic) NSString *limitAmount; // @synthesize limitAmount=_limitAmount;
@property(retain, nonatomic) NSString *totalAmountText; // @synthesize totalAmountText=_totalAmountText;
@property(retain, nonatomic) NSString *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(retain, nonatomic) TZBTransferChannelModel *toChannel; // @synthesize toChannel=_toChannel;
@property(retain, nonatomic) TZBTransferChannelModel *fromChannel; // @synthesize fromChannel=_fromChannel;
- (void).cxx_destruct;
- (id)initWithRpcResult:(id)arg1;

@end

