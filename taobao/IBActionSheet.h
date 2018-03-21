//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IBActionSheetButton, IBActionSheetTitleView, NSDictionary, NSMutableArray, NSString;
@protocol IBActionSheetDelegate;

@interface IBActionSheet : UIView
{
    _Bool _visible;
    _Bool _hasDestructiveButton;
    _Bool _shouldCancelOnTouch;
    NSDictionary *_userInfo;
    UIView *_transparentView;
    NSMutableArray *_buttons;
    NSString *_title;
    IBActionSheetTitleView *_titleView;
    id <IBActionSheetDelegate> _delegate;
    long long _buttonResponse;
    IBActionSheetButton *_cancelButton;
}

@property(retain, nonatomic) IBActionSheetButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property _Bool shouldCancelOnTouch; // @synthesize shouldCancelOnTouch=_shouldCancelOnTouch;
@property _Bool hasDestructiveButton; // @synthesize hasDestructiveButton=_hasDestructiveButton;
@property _Bool visible; // @synthesize visible=_visible;
@property long long buttonResponse; // @synthesize buttonResponse=_buttonResponse;
@property __weak id <IBActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IBActionSheetTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)setTitleFont:(id)arg1;
- (void)setFont:(id)arg1 forButton:(id)arg2;
- (void)setFont:(id)arg1 forButtonAtIndex:(long long)arg2;
- (void)setFont:(id)arg1;
- (long long)numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;
- (void)setButtonHighlightTextColor:(id)arg1 forButtonAtIndex:(long long)arg2;
- (void)setButtonHighlightTextColor:(id)arg1;
- (void)setButtonHighlightBackgroundColor:(id)arg1 forButtonAtIndex:(long long)arg2;
- (void)setButtonHighlightBackgroundColor:(id)arg1;
- (id)buttonTextColorAtIndex:(long long)arg1;
- (id)buttonBackgroundColorAtIndex:(long long)arg1;
- (void)setButtonTextColor:(id)arg1 forButtonAtIndex:(long long)arg2;
- (void)setButtonBackgroundColor:(id)arg1 forButtonAtIndex:(long long)arg2;
- (void)setTextColor:(id)arg1 ForButton:(id)arg2;
- (void)setTitleBackgroundColor:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setButtonBackgroundColor:(id)arg1;
- (void)setButtonTextColor:(id)arg1;
- (void)rotateToCurrentOrientation;
- (void)removeFromView;
- (void)showInView:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)buttonClicked:(id)arg1;
- (void)unhighlightPressedButton:(id)arg1;
- (void)highlightPressedButton:(id)arg1;
- (void)setUpTheActions;
- (void)setActionForButton:(id)arg1;
- (void)setUpTheActionSheet;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitlesArray:(id)arg5 titleFont:(id)arg6;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 titleFont:(id)arg5 otherButtonTitles:(id)arg6;
- (id)init;

@end

