//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, TBItemSearchHelperService, TBSearchServiceContext, TBXSearchContext, TBXSearchSimpleService;
@protocol TBSearchSideDoorViewModelDelegate;

@interface TBSearchSideDoorViewModel : NSObject
{
    NSMutableArray *_widgets;
    NSMutableArray *_suggestions;
    id <TBSearchSideDoorViewModelDelegate> _delegate;
    TBXSearchContext *_searchContext;
    NSMutableArray *_history;
    NSString *_suggestRN;
    TBItemSearchHelperService *_helperSevice;
    TBSearchServiceContext *_helperCallBack;
    NSMutableArray *_tabData;
    NSDictionary *_placeHolders;
    TBXSearchSimpleService *_simpleService;
}

@property(retain, nonatomic) TBXSearchSimpleService *simpleService; // @synthesize simpleService=_simpleService;
@property(retain, nonatomic) NSDictionary *placeHolders; // @synthesize placeHolders=_placeHolders;
@property(retain, nonatomic) NSMutableArray *tabData; // @synthesize tabData=_tabData;
@property(retain, nonatomic) TBSearchServiceContext *helperCallBack; // @synthesize helperCallBack=_helperCallBack;
@property(retain, nonatomic) TBItemSearchHelperService *helperSevice; // @synthesize helperSevice=_helperSevice;
@property(retain, nonatomic) NSString *suggestRN; // @synthesize suggestRN=_suggestRN;
@property(retain, nonatomic) NSMutableArray *history; // @synthesize history=_history;
@property(retain, nonatomic) TBXSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(nonatomic) __weak id <TBSearchSideDoorViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) NSMutableArray *widgets; // @synthesize widgets=_widgets;
- (void).cxx_destruct;
- (id)getPlaceHolderWithTab:(id)arg1;
- (id)getTabData:(id)arg1;
- (void)fetchSuggestionWithParams:(id)arg1;
- (void)fetchSuggestionForQuery:(id)arg1 tab:(id)arg2;
- (id)getSuggestionResultArray;
- (void)toggleWidgetAtIndex:(long long)arg1;
- (void)parseResultAndDelegateUpdate:(id)arg1;
- (void)fetchSideDoorDataWithExtraParams:(id)arg1;
- (void)removeHistoryAtIndex:(long long)arg1;
- (void)cleanHistory;
- (void)addHistory:(id)arg1;
- (_Bool)isTimeToUpdateHistory;
- (id)historyKey;
- (void)dealloc;
- (id)init;

@end

