//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class TTAlphaThemedButton, WDAnswerEntity;
@protocol WDWendaListCellActionFooterViewDelegate;

@interface WDWendaListCellActionFooterView : SSThemedView
{
    id <WDWendaListCellActionFooterViewDelegate> _delegate;
    TTAlphaThemedButton *_diggButton;
    TTAlphaThemedButton *_commentButton;
    TTAlphaThemedButton *_forwardButton;
    WDAnswerEntity *_answerEntity;
}

+ (id)forwardImageName;
+ (id)commentImageName;
+ (id)diggImageName;
+ (id)titleColorKey;
+ (double)buttonFontSize;
+ (double)sepPadding;
+ (id)forwardContentFromCount:(id)arg1;
+ (id)commentContentFromCount:(id)arg1;
+ (id)diggContentFromCount:(id)arg1;
+ (double)actionFooterHeight;
@property(retain, nonatomic) WDAnswerEntity *answerEntity; // @synthesize answerEntity=_answerEntity;
@property(retain, nonatomic) TTAlphaThemedButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) TTAlphaThemedButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) TTAlphaThemedButton *diggButton; // @synthesize diggButton=_diggButton;
@property(nonatomic) __weak id <WDWendaListCellActionFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)forwardButtonClick;
- (void)commentButtonClick;
- (void)diggButtonClick:(id)arg1;
- (void)refreshDiggCount:(id)arg1 isDigg:(_Bool)arg2;
- (void)refreshCommentCount:(id)arg1;
- (void)refreshForwardCount:(id)arg1;
- (void)refreshForwardCount:(id)arg1 commentCount:(id)arg2 diggCount:(id)arg3 isDigg:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 answerEntity:(id)arg2;

@end
