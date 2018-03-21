//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MCRecentSectionViewProtocol-Protocol.h"
#import "MCRecommandGroupViewDelegate-Protocol.h"
#import "MCRecommandViewProtocol-Protocol.h"

@class NSArray, NSString;
@protocol MCRecommandViewDelegate;

@interface MCLongRecommandView : UIView <MCRecommandGroupViewDelegate, MCRecommandViewProtocol, MCRecentSectionViewProtocol>
{
    id <MCRecommandViewDelegate> _delegate;
    NSArray *_groupViewList;
}

+ (double)heightForView:(id)arg1;
@property(retain, nonatomic) NSArray *groupViewList; // @synthesize groupViewList=_groupViewList;
@property(nonatomic) __weak id <MCRecommandViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)getRows;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)recommandGroupView:(id)arg1 clickMoreButton:(id)arg2;
- (void)recommandGroupView:(id)arg1 itemClickAtIndex:(long long)arg2;
- (void)recommandGroupView:(id)arg1 subcribeClickAtIndex:(long long)arg2;
- (void)setContentData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
