//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "WDDetailNatantViewBase-Protocol.h"

@class NSString;

@interface WDDetailNatantViewBase : SSThemedView <WDDetailNatantViewBase>
{
    _Bool _hasShow;
    NSString *_eventLabel;
    CDUnknownBlockType _relayOutBlock;
    CDUnknownBlockType _scrollInOrOutBlock;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(copy, nonatomic) CDUnknownBlockType scrollInOrOutBlock; // @synthesize scrollInOrOutBlock=_scrollInOrOutBlock;
@property(copy, nonatomic) CDUnknownBlockType relayOutBlock; // @synthesize relayOutBlock=_relayOutBlock;
@property(copy, nonatomic) NSString *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(nonatomic) _Bool hasShow; // @synthesize hasShow=_hasShow;
- (void).cxx_destruct;
- (void)fontChanged;
- (void)sendShowTrackIfNeededForGroup:(id)arg1 withLabel:(id)arg2;
- (void)refreshUI;
- (void)checkVisableRelatedArticlesAtContentOffset:(double)arg1 referViewHeight:(double)arg2;
- (void)trackEventIfNeededWithStyle:(id)arg1;
- (void)trackEventIfNeeded;
- (void)reloadData:(id)arg1;
- (void)refreshWithWidth:(double)arg1;
- (id)initWithWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

