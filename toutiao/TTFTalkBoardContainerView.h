//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, TTFMessageInputView, TTFTalkBoardView, TTFTalkBoardViewModel, UIButton, UILabel, UIPageControl;
@protocol TTFTalkBoardDelegate;

@interface TTFTalkBoardContainerView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _enableEditing;
    id <TTFTalkBoardDelegate> _boardDelegate;
    TTFTalkBoardView *_talkboardView;
    TTFMessageInputView *_inputView;
    UIButton *_messageButton;
    UIPageControl *_pageDotView;
    UILabel *_slideTipLabel;
    TTFTalkBoardViewModel *_viewModel;
}

@property(nonatomic) _Bool enableEditing; // @synthesize enableEditing=_enableEditing;
@property(retain, nonatomic) TTFTalkBoardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *slideTipLabel; // @synthesize slideTipLabel=_slideTipLabel;
@property(retain, nonatomic) UIPageControl *pageDotView; // @synthesize pageDotView=_pageDotView;
@property(retain, nonatomic) UIButton *messageButton; // @synthesize messageButton=_messageButton;
@property(retain, nonatomic) TTFMessageInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) TTFTalkBoardView *talkboardView; // @synthesize talkboardView=_talkboardView;
@property(nonatomic) __weak id <TTFTalkBoardDelegate> boardDelegate; // @synthesize boardDelegate=_boardDelegate;
- (void).cxx_destruct;
- (void)reloadData;
- (void)editingStateChanged;
- (void)bindEventHandler;
- (void)editButtonDidTouched;
- (void)containerViewTapped;
- (void)stopEditing;
- (void)updateConstraints;
- (void)updateCurrentPageStatusForScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)initUIComponents;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

