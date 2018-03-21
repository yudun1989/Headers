//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIScrollView;
@protocol FavSearchDimmingViewDelegate;

@interface FavSearchDimmingView : UIView <UIScrollViewDelegate>
{
    id <FavSearchDimmingViewDelegate> _delegate;
    NSArray *_dataList;
    NSArray *_btnList;
    UIScrollView *_containerView;
}

@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *btnList; // @synthesize btnList=_btnList;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) __weak id <FavSearchDimmingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cancelSearchByTap;
- (void)selectedType:(id)arg1;
- (void)resetState;
- (void)buildSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

