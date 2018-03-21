//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "EmotionBoardViewDelegate-Protocol.h"
#import "SFEditViewDelegate-Protocol.h"
#import "SFEmojiBtnLineViewDelegate-Protocol.h"

@class EmotionBoardView, NSString, SFEditView, SFEmojiBtnLineView;

@interface SFBaseTextWithEmojiViewController : DTViewController <SFEditViewDelegate, EmotionBoardViewDelegate, SFEmojiBtnLineViewDelegate>
{
    _Bool _isViewShow;
    _Bool _keyboardDismissed;
    _Bool _isViewDidShow;
    _Bool _showAtBottom;
    SFEditView *_textView;
    SFEmojiBtnLineView *_emojiBtnLineView;
    double _keyboardHeight;
    EmotionBoardView *_emojiView;
}

@property(nonatomic) _Bool showAtBottom; // @synthesize showAtBottom=_showAtBottom;
@property(retain, nonatomic) EmotionBoardView *emojiView; // @synthesize emojiView=_emojiView;
@property(nonatomic) _Bool isViewDidShow; // @synthesize isViewDidShow=_isViewDidShow;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool keyboardDismissed; // @synthesize keyboardDismissed=_keyboardDismissed;
@property(nonatomic) _Bool isViewShow; // @synthesize isViewShow=_isViewShow;
@property(retain, nonatomic) SFEmojiBtnLineView *emojiBtnLineView; // @synthesize emojiBtnLineView=_emojiBtnLineView;
@property(retain, nonatomic) SFEditView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)editStyleChanged:(id)arg1;
- (void)needResetSendButtonText;
- (void)editViewDone:(id)arg1;
- (void)deleteButtonPressed;
- (void)sendButtonPressed;
- (void)emotionToSend:(id)arg1;
- (void)showEmojiView:(_Bool)arg1 commentViewFollow:(_Bool)arg2 animation:(_Bool)arg3;
- (void)dealloc;
- (void)cleanMySelf;
- (void)viewWillDestroy;
- (void)keyboardFrameWillChange:(id)arg1;
- (void)keyboardDidDisappear:(id)arg1;
- (void)keyboardWillDisappear:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)doKeyboardAnimation:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)editViewDidChange:(id)arg1;
- (void)closeKeyboard:(id)arg1;
- (void)removeKeyboardObserver;
- (void)addKeyboardObserver;
- (void)beforePushViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)checkKeyBoard;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setUPEmojiBtnLineViewWithHeight:(double)arg1 emojiBtnFrame:(struct CGRect)arg2 showAtBottom:(_Bool)arg3;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

