//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTradeRecmdManager-Protocol.h"

@class NSMutableArray, NSString, TBTradeRecmdContext, TBTradeRecmdGroupSectionView, UIView;
@protocol TBTradeRecmdGroupModel, TBTradeRecmdManager;

@interface TBTradeRecmdGroupManager : NSObject <TBTradeRecmdManager>
{
    NSMutableArray<TBTradeRecmdManager> *_childManager;
    NSString *_identifier;
    id <TBTradeRecmdManager> _parent;
    NSMutableArray<TBTradeRecmdManager> *_childManagers;
    double _totalItemHeight;
    NSString *_specailTitle;
    TBTradeRecmdGroupSectionView *_view;
    UIView *_totalView;
    id <TBTradeRecmdGroupModel> _model;
    TBTradeRecmdContext *_context;
    double _itemHeight;
}

@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(retain, nonatomic) TBTradeRecmdContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <TBTradeRecmdGroupModel> model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *totalView; // @synthesize totalView=_totalView;
@property(retain, nonatomic) TBTradeRecmdGroupSectionView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSString *specailTitle; // @synthesize specailTitle=_specailTitle;
@property(nonatomic) double totalItemHeight; // @synthesize totalItemHeight=_totalItemHeight;
@property(retain, nonatomic) NSMutableArray<TBTradeRecmdManager> *childManagers; // @synthesize childManagers=_childManagers;
@property(nonatomic) __weak id <TBTradeRecmdManager> parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (Class)viewClass;
- (long long)itemCountInOneCellWithItemType:(unsigned long long)arg1;
- (void)updateCell:(id)arg1;
- (void)updateView:(id)arg1;
- (id)childManagerAtIndex:(long long)arg1;
- (id)cell;
- (void)freeView;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithData:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

