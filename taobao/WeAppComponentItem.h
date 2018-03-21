//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppComponentBaseItem.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, WeAppExpressionItem, WeAppLayoutItem, WeAppStyleBindingItem;

@interface WeAppComponentItem : WeAppComponentBaseItem <NSCopying, NSMutableCopying>
{
    NSString *_type;
    NSString *_viewId;
    NSString *_targetId;
    WeAppStyleBindingItem *_styleBinding;
    NSArray *_subViews;
    WeAppComponentItem *_cell;
    WeAppComponentItem *_headerView;
    WeAppComponentItem *_footerView;
    WeAppComponentItem *_selectedCell;
    WeAppComponentItem *_indicatorView;
    NSString *_apiName;
    _Bool _needLogin;
    NSString *_value;
    NSArray *_actions;
    NSArray *_events;
    NSArray *_animations;
    NSArray *_conditions;
    NSMutableDictionary *_dataBinding;
    _Bool _needDownRefresh;
    _Bool _needNextPage;
    _Bool _unScroll;
    NSArray *_actionOn;
    NSArray *_actionOff;
    _Bool _isPagingLoad;
    _Bool _isLazyLoadOpen;
    _Bool _needForeach;
    _Bool _fromForeach;
    _Bool _isComponentInList;
    _Bool _isNeedReOnload;
    _Bool _foreachOptimizationForList;
    _Bool _isViewItemParsedForOptimzeList;
    id _needDownRefreshObject;
    id _needNextPageObject;
    WeAppLayoutItem *_layout;
    long long _foreachIndex;
    long long _listIndex;
    NSMutableArray *_scrollViewChildren;
    NSMutableDictionary *_pagingLoad;
    WeAppExpressionItem *_expressionItem;
    NSString *_emptyMsg;
    NSDictionary *_foreachDict;
    unsigned long long _foreachArraySize;
    NSDictionary *_componentDict;
    struct CGRect _frame;
}

@property(retain, nonatomic) NSDictionary *componentDict; // @synthesize componentDict=_componentDict;
@property(nonatomic) _Bool isViewItemParsedForOptimzeList; // @synthesize isViewItemParsedForOptimzeList=_isViewItemParsedForOptimzeList;
@property(nonatomic) _Bool foreachOptimizationForList; // @synthesize foreachOptimizationForList=_foreachOptimizationForList;
@property(nonatomic) _Bool isNeedReOnload; // @synthesize isNeedReOnload=_isNeedReOnload;
@property(nonatomic) _Bool isComponentInList; // @synthesize isComponentInList=_isComponentInList;
@property(nonatomic) unsigned long long foreachArraySize; // @synthesize foreachArraySize=_foreachArraySize;
@property(nonatomic) _Bool fromForeach; // @synthesize fromForeach=_fromForeach;
@property(retain, nonatomic) NSDictionary *foreachDict; // @synthesize foreachDict=_foreachDict;
@property(nonatomic) _Bool needForeach; // @synthesize needForeach=_needForeach;
@property(retain, nonatomic) NSString *emptyMsg; // @synthesize emptyMsg=_emptyMsg;
@property(nonatomic) _Bool isLazyLoadOpen; // @synthesize isLazyLoadOpen=_isLazyLoadOpen;
@property(retain, nonatomic) WeAppExpressionItem *expressionItem; // @synthesize expressionItem=_expressionItem;
@property(retain, nonatomic) NSMutableDictionary *pagingLoad; // @synthesize pagingLoad=_pagingLoad;
@property(nonatomic) _Bool isPagingLoad; // @synthesize isPagingLoad=_isPagingLoad;
@property(retain, nonatomic) NSMutableArray *scrollViewChildren; // @synthesize scrollViewChildren=_scrollViewChildren;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) WeAppComponentItem *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(nonatomic) long long listIndex; // @synthesize listIndex=_listIndex;
@property(nonatomic) long long foreachIndex; // @synthesize foreachIndex=_foreachIndex;
@property(retain, nonatomic) WeAppLayoutItem *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSArray *actionOff; // @synthesize actionOff=_actionOff;
@property(retain, nonatomic) NSArray *actionOn; // @synthesize actionOn=_actionOn;
@property(nonatomic) _Bool unScroll; // @synthesize unScroll=_unScroll;
@property(nonatomic) _Bool needNextPage; // @synthesize needNextPage=_needNextPage;
@property(nonatomic) _Bool needDownRefresh; // @synthesize needDownRefresh=_needDownRefresh;
@property(retain, nonatomic) id needNextPageObject; // @synthesize needNextPageObject=_needNextPageObject;
@property(retain, nonatomic) id needDownRefreshObject; // @synthesize needDownRefreshObject=_needDownRefreshObject;
@property(retain, nonatomic) NSMutableDictionary *dataBinding; // @synthesize dataBinding=_dataBinding;
@property(retain, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(retain, nonatomic) NSArray *animations; // @synthesize animations=_animations;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) WeAppComponentItem *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) WeAppComponentItem *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) WeAppComponentItem *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WeAppComponentItem *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSArray *subViews; // @synthesize subViews=_subViews;
@property(retain, nonatomic, setter=setStyleBinding:) WeAppStyleBindingItem *styleBinding; // @synthesize styleBinding=_styleBinding;
@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)getConfigureWithParentViewSize:(struct CGSize)arg1 andParentView:(id)arg2;
- (struct CGRect)getFrameWithParentViewSize:(struct CGSize)arg1;
- (void)recursiveUpdateAllSizeByScreen:(id)arg1;
- (void)updateAllSizeByScreen;
- (void)updateLayoutParam:(id)arg1;
- (void)updateCssItem:(id)arg1;
- (void)updateEvents:(id)arg1;
- (void)updateDataBinding:(id)arg1;
- (id)toDictionary;
- (_Bool)getBoolValueFromObject:(id)arg1;
- (void)setFromDictionary:(id)arg1;
- (id)parseModule:(id)arg1;
- (void)setForeachFromDictionary:(id)arg1;
- (void)updateForeachWithDataManager:(id)arg1;
- (void)updateViewItem:(id)arg1;
- (id)getEnableConditonForViewWithDataManager:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parseStaticDataWithWeAppDataManager:(id)arg1;
- (void)parseCellModelCAViewIdWithIndex:(unsigned long long)arg1 description:(id)arg2 weAppDataManager:(id)arg3;
- (void)parseCellModelCAViewIdWithIndex:(unsigned long long)arg1 weAppDataManager:(id)arg2;
- (void)parseDataBindingWithIndex:(unsigned long long)arg1 weAppDataManager:(id)arg2 prefix:(id)arg3;
- (void)parseDataBindingWithIndex:(unsigned long long)arg1 weAppDataManager:(id)arg2;
- (void)setupCellPropertyWithCellViewItem:(id)arg1 weAppDataManager:(id)arg2;

@end

