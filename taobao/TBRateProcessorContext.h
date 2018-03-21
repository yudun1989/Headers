//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTradeProcessorContext-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, TBRateTradeView, UITableView;

@interface TBRateProcessorContext : NSObject <TBTradeProcessorContext>
{
    NSMutableDictionary *_datas;
    id _component;
    UITableView *_tableView;
    NSDictionary *_componentList;
    TBRateTradeView *_tradeView;
}

@property(retain, nonatomic) TBRateTradeView *tradeView; // @synthesize tradeView=_tradeView;
@property(retain, nonatomic) NSDictionary *componentList; // @synthesize componentList=_componentList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id component; // @synthesize component=_component;
- (void).cxx_destruct;
- (id)tradeViewUI;
- (id)datas;
- (void)addData:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

