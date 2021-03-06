//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEGrowingTextViewDelegate-Protocol.h"

@class AWEGrowingTextView;
@protocol AWEIMInputViewControllerDelegate;

@interface AWEIMInputViewController : UIViewController <AWEGrowingTextViewDelegate>
{
    _Bool _isShowingKeyboard;
    id <AWEIMInputViewControllerDelegate> _delegate;
    AWEGrowingTextView *_textView;
}

@property(retain, nonatomic) AWEGrowingTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool isShowingKeyboard; // @synthesize isShowingKeyboard=_isShowingKeyboard;
@property(nonatomic) __weak id <AWEIMInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_maskLayer;
- (void)_hideKeyBoardToSetTextView;
- (void)_showKeyBoardToSetTextView;
- (void)_setupUI;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)handleKeyboardHideNoti:(id)arg1;
- (void)handleKeyboardShowNoti:(id)arg1;
- (void)_removeObservers;
- (void)_addObservers;
- (void)hideKeyboard;
- (void)showKeyboard;
- (void)dealloc;
- (void)viewDidLoad;

@end

