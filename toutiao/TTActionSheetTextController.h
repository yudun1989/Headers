//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, SSThemedButton, SSThemedTextView, TTActionSheetManager, TTActionSheetTitleView, TTKeyboardListener;

@interface TTActionSheetTextController : UIViewController <UITextViewDelegate>
{
    _Bool _popLock;
    long long _source;
    double _viewHeight;
    TTActionSheetManager *_manager;
    TTKeyboardListener *_keyboardListener;
    SSThemedTextView *_inputTextView;
    SSThemedButton *_finishedButton;
    TTActionSheetTitleView *_titleView;
}

@property(retain, nonatomic) TTActionSheetTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool popLock; // @synthesize popLock=_popLock;
@property(retain, nonatomic) SSThemedButton *finishedButton; // @synthesize finishedButton=_finishedButton;
@property(retain, nonatomic) SSThemedTextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) TTKeyboardListener *keyboardListener; // @synthesize keyboardListener=_keyboardListener;
@property(retain, nonatomic) TTActionSheetManager *manager; // @synthesize manager=_manager;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardDidHide;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

