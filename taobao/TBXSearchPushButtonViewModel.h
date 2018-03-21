//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchViewModel.h"

@class TBSearchPushButtonModel, TBXSearchService;
@protocol TBSearchViewComponent;

@interface TBXSearchPushButtonViewModel : TBSearchViewModel
{
    _Bool _isShowing;
    _Bool _hasHighlighted;
    TBXSearchService *_searchService;
}

@property(nonatomic) _Bool hasHighlighted; // @synthesize hasHighlighted=_hasHighlighted;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) TBXSearchService *searchService; // @synthesize searchService=_searchService;
- (void).cxx_destruct;
- (double)hintStayTimeInterval;
- (void)clearData;
- (id)getStorageKey;
- (id)getUTArgs;
- (void)dataLoaded;
- (_Bool)checkTimeValid;
- (void)updateCloseTime;
- (_Bool)checkShowStrongGuide;
- (unsigned long long)getPage:(id)arg1;
- (_Bool)checkStragegyValidWithCurrentPage:(unsigned long long)arg1;
- (_Bool)checkDisappearPageWithCurrentPage:(unsigned long long)arg1;
- (_Bool)checkAppearPageWithCurrentPage:(unsigned long long)arg1;
- (_Bool)checkShow;
@property(readonly, nonatomic) TBSearchPushButtonModel *model;
- (id)initWithSearchService:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <TBSearchViewComponent> uiComponent; // @dynamic uiComponent;

@end

