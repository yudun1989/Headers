//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "ErrorToastProtocal-Protocol.h"

@class NSString, SSThemedButton, SSThemedLabel;

@interface ArticleListNotifyBarView : SSViewBase <ErrorToastProtocal>
{
    _Bool _userClose;
    SSThemedButton *_rightActionButton;
    SSThemedLabel *_notifyLabel;
    SSThemedButton *_bgButton;
    CDUnknownBlockType _bgButtonBlock;
    CDUnknownBlockType _actionButtonBlock;
    CDUnknownBlockType _hideBlock;
}

+ (id)addErrorToastViewWithTop:(double)arg1 width:(double)arg2 height:(double)arg3;
@property(copy, nonatomic) CDUnknownBlockType hideBlock; // @synthesize hideBlock=_hideBlock;
@property(copy, nonatomic) CDUnknownBlockType actionButtonBlock; // @synthesize actionButtonBlock=_actionButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType bgButtonBlock; // @synthesize bgButtonBlock=_bgButtonBlock;
@property(retain, nonatomic) SSThemedButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) SSThemedLabel *notifyLabel; // @synthesize notifyLabel=_notifyLabel;
@property(nonatomic) _Bool userClose; // @synthesize userClose=_userClose;
@property(retain, nonatomic) SSThemedButton *rightActionButton; // @synthesize rightActionButton=_rightActionButton;
- (void).cxx_destruct;
- (_Bool)needResetScrollView;
- (void)clean;
- (void)hideSelf;
- (void)hideImmediately;
- (void)hideIfNeeds;
- (void)bgButtonClicked:(id)arg1;
- (void)rightActionButtonClicked:(id)arg1;
- (void)showMessage:(id)arg1 actionButtonTitle:(id)arg2 delayHide:(_Bool)arg3 duration:(float)arg4 bgButtonClickAction:(CDUnknownBlockType)arg5 actionButtonClickBlock:(CDUnknownBlockType)arg6 didHideBlock:(CDUnknownBlockType)arg7;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

