//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXViewModel.h"

#import "NXStoreProtocol-Protocol.h"

@class NSString, TXDAlipayAccountModel;

@interface TXDAlipayAccountViewModel : NXViewModel <NXStoreProtocol>
{
    NSString *_userId;
    TXDAlipayAccountModel *_model;
}

@property(retain, nonatomic) TXDAlipayAccountModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (Class)modelClass;
- (struct NSDictionary *)api;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

