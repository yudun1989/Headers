//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class MOBILECSARqySearchFutureRequest, MOBILECSARqySearchFutureResponse, NSArray, NSMutableDictionary, O2OPageMenuItem, O2OPopFutureAddressItem;

@interface O2OPopFutureListModel : O2OMistModel
{
    _Bool _isFirstRequest;
    MOBILECSARqySearchFutureRequest *_futureRequest;
    MOBILECSARqySearchFutureResponse *_futureResponse;
    NSArray *_tabList;
    NSArray *_radiusList;
    O2OPopFutureAddressItem *_addressItem;
    O2OPageMenuItem *_pageMenuItem;
    NSMutableDictionary *_tabDataList;
}

@property(retain, nonatomic) NSMutableDictionary *tabDataList; // @synthesize tabDataList=_tabDataList;
@property(retain, nonatomic) O2OPageMenuItem *pageMenuItem; // @synthesize pageMenuItem=_pageMenuItem;
@property(nonatomic) _Bool isFirstRequest; // @synthesize isFirstRequest=_isFirstRequest;
@property(retain, nonatomic) O2OPopFutureAddressItem *addressItem; // @synthesize addressItem=_addressItem;
@property(retain, nonatomic) NSArray *radiusList; // @synthesize radiusList=_radiusList;
@property(retain, nonatomic) NSArray *tabList; // @synthesize tabList=_tabList;
@property(retain, nonatomic) MOBILECSARqySearchFutureResponse *futureResponse; // @synthesize futureResponse=_futureResponse;
@property(retain, nonatomic) MOBILECSARqySearchFutureRequest *futureRequest; // @synthesize futureRequest=_futureRequest;
- (void).cxx_destruct;
- (id)operationType;
- (_Bool)shouldDowngrade;
- (id)templateConfig;
- (_Bool)handleTemplatesCompletion:(id)arg1 failedItems:(id)arg2 err:(id)arg3;
- (void)handleAddressData:(id)arg1;
- (void)handleFirstMenuItem:(id)arg1;
- (void)handleRadiusData:(id)arg1;
- (id)responseObjects:(id)arg1;
- (_Bool)isPBResponse;
- (_Bool)raise1002Exception;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (id)initWithViewController:(id)arg1;

@end

