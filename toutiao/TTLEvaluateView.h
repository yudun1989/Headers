//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TTLStarView, UIScrollView, UITextView;

@interface TTLEvaluateView : UIView <UITextViewDelegate, UIScrollViewDelegate>
{
    UITextView *_suggestTextView;
    long long _experiencelevel;
    long long _functionLevel;
    long long _interactionLevel;
    NSString *_advice;
    UIScrollView *_contentView;
    NSMutableArray *_reponseViews;
    TTLStarView *_starView01;
    TTLStarView *_starView02;
    TTLStarView *_starView03;
}

@property(retain, nonatomic) TTLStarView *starView03; // @synthesize starView03=_starView03;
@property(retain, nonatomic) TTLStarView *starView02; // @synthesize starView02=_starView02;
@property(retain, nonatomic) TTLStarView *starView01; // @synthesize starView01=_starView01;
@property(retain, nonatomic) NSMutableArray *reponseViews; // @synthesize reponseViews=_reponseViews;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *advice; // @synthesize advice=_advice;
@property(nonatomic) long long interactionLevel; // @synthesize interactionLevel=_interactionLevel;
@property(nonatomic) long long functionLevel; // @synthesize functionLevel=_functionLevel;
@property(nonatomic) long long experiencelevel; // @synthesize experiencelevel=_experiencelevel;
@property(readonly, nonatomic) UITextView *suggestTextView; // @synthesize suggestTextView=_suggestTextView;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_scrollToNextResponseView:(id)arg1;
- (void)layoutSubviews;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

