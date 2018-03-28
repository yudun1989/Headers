//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, TTArticleSearchHistoryView, TTArticleSearchManager;
@protocol TTArticleSearchViewModelDelegate;

@interface TTArticleSearchViewModel : NSObject
{
    _Bool _allHistoryShowing;
    _Bool _recommendHidden;
    _Bool _historyEditing;
    TTArticleSearchHistoryView<TTArticleSearchViewModelDelegate> *_view;
    TTArticleSearchManager *_manager;
    NSArray *_inboxKeywords;
    NSArray *_historyKeywords;
    NSArray *_recommendKeywords;
}

@property(nonatomic) _Bool historyEditing; // @synthesize historyEditing=_historyEditing;
@property(nonatomic) _Bool recommendHidden; // @synthesize recommendHidden=_recommendHidden;
@property(nonatomic) _Bool allHistoryShowing; // @synthesize allHistoryShowing=_allHistoryShowing;
@property(copy, nonatomic) NSArray *recommendKeywords; // @synthesize recommendKeywords=_recommendKeywords;
@property(copy, nonatomic) NSArray *historyKeywords; // @synthesize historyKeywords=_historyKeywords;
@property(copy, nonatomic) NSArray *inboxKeywords; // @synthesize inboxKeywords=_inboxKeywords;
@property(retain, nonatomic) TTArticleSearchManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak TTArticleSearchHistoryView<TTArticleSearchViewModelDelegate> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)eventTrackLog3:(id)arg1;
- (void)eventTrack:(id)arg1;
- (_Bool)hasNoInbox;
- (_Bool)hasNoRecommend;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)itemViewModelAtIndexPath:(id)arg1 subIndex:(long long)arg2 offset:(long long)arg3 rowCount:(long long)arg4;
- (id)headerCellViewModelInSection:(long long)arg1;
- (_Bool)isFooterCellAtIndexPath:(id)arg1;
- (_Bool)isHeaderCellAtIndexPath:(id)arg1;
- (_Bool)isInboxCellAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)updateWithInboxKeywords:(id)arg1 historyKeywords:(id)arg2 recommendKeywords:(id)arg3;
- (id)initWithManager:(id)arg1 inboxKeywords:(id)arg2 historyKeywords:(id)arg3 recommendKeywords:(id)arg4;

@end

