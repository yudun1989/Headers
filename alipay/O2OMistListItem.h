//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OFNodeListItem.h"

#import "O2OMistItemProtocol-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, O2OTemplate, O2OTemplateController, UITableView, UIViewController, VZFNode, VZTExpressionContext;

@interface O2OMistListItem : O2OFNodeListItem <O2OMistItemProtocol>
{
    NSMutableArray *_stateUpdates;
    NSString *_degradeInfo;
    NSMutableArray *_logs;
    _Bool _localTemplateMode;
    _Bool _shouldRealExposure;
    _Bool _isFromCache;
    _Bool _insertItemIfSectioned;
    _Bool _hasData;
    _Bool _nodeInitialized;
    NSString *_tplId;
    NSDictionary *_config;
    NSDictionary *_data;
    NSMutableDictionary *_customData;
    UITableView *_tableView;
    O2OTemplateController *_controller;
    UIViewController *_viewController;
    NSString *_templateJson;
    O2OTemplate *_tpl;
    NSDictionary *_state;
    CDUnknownBlockType _updateStateCompletion;
    NSString *_previousNativeId;
    NSString *_nextNativeId;
    VZFNode *_node;
    VZTExpressionContext *_expressionContext;
    NSDictionary *_allTemplates;
}

+ (Class)sectionClass;
+ (id)stateUpdateQueue;
+ (id)nodeForItem:(id)arg1 Store:(id)arg2 Context:(id)arg3;
+ (id)parseFromArray:(id)arg1 viewController:(id)arg2;
@property(copy, nonatomic) NSDictionary *allTemplates; // @synthesize allTemplates=_allTemplates;
@property(readonly, nonatomic) VZTExpressionContext *expressionContext; // @synthesize expressionContext=_expressionContext;
@property(readonly, nonatomic) VZFNode *node; // @synthesize node=_node;
@property(retain, nonatomic) NSString *nextNativeId; // @synthesize nextNativeId=_nextNativeId;
@property(retain, nonatomic) NSString *previousNativeId; // @synthesize previousNativeId=_previousNativeId;
@property(copy, nonatomic) CDUnknownBlockType updateStateCompletion; // @synthesize updateStateCompletion=_updateStateCompletion;
@property(nonatomic) _Bool nodeInitialized; // @synthesize nodeInitialized=_nodeInitialized;
@property(nonatomic) _Bool hasData; // @synthesize hasData=_hasData;
@property(readonly, nonatomic) NSDictionary *state; // @synthesize state=_state;
@property(nonatomic) _Bool insertItemIfSectioned; // @synthesize insertItemIfSectioned=_insertItemIfSectioned;
@property(retain, nonatomic) O2OTemplate *tpl; // @synthesize tpl=_tpl;
@property(nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(nonatomic) _Bool shouldRealExposure; // @synthesize shouldRealExposure=_shouldRealExposure;
@property(retain, nonatomic) NSString *templateJson; // @synthesize templateJson=_templateJson;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) O2OTemplateController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool localTemplateMode; // @synthesize localTemplateMode=_localTemplateMode;
@property(retain, nonatomic) NSMutableDictionary *customData; // @synthesize customData=_customData;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *tplId; // @synthesize tplId=_tplId;
- (void).cxx_destruct;
- (id)defaultBusiness;
- (void)writeExposureLogWithActionId:(id)arg1 extParams:(id)arg2 seed:(id)arg3;
- (void)writeExposureLog:(id)arg1;
- (void)writeOpenPageLogWithActionId:(id)arg1 extParams:(id)arg2 seed:(id)arg3 ucId:(id)arg4;
- (void)writeOpenPageLog:(id)arg1;
- (void)updateState:(CDUnknownBlockType)arg1;
- (void)updateState:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_doUpdateState;
- (void)attachToView:(id)arg1;
- (id)reuseIdentifier;
- (void)refreshCell;
- (float)constrainedWidth;
- (void)setNode:(id)arg1;
- (void)rebuild:(_Bool)arg1;
- (void)setData:(id)arg1 keepState:(_Bool)arg2;
- (void)setTemplate:(id)arg1 allTemplates:(id)arg2;
- (void)updateSectionItem:(id)arg1 withTemplate:(id)arg2 allTemplates:(id)arg3;
- (id)keyForBlockSavingTime:(id)arg1;
- (void)saveToDiskIfNeed;
- (id)keyForBlock:(id)arg1;
- (_Bool)loadCacheForBlock:(id)arg1;
- (id)initWithData:(id)arg1 viewController:(id)arg2;
- (id)initWithData:(id)arg1 tplId:(id)arg2 degradeInfo:(id)arg3 viewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

