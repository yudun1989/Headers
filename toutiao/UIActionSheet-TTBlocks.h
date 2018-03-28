//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActionSheet.h>

@interface UIActionSheet (TTBlocks)
+ (id)showFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3 withTitle:(id)arg4 cancelButtonTitle:(id)arg5 destructiveButtonTitle:(id)arg6 otherButtonTitles:(id)arg7 tapBlock:(CDUnknownBlockType)arg8;
+ (id)showFromBarButtonItem:(id)arg1 animated:(_Bool)arg2 withTitle:(id)arg3 cancelButtonTitle:(id)arg4 destructiveButtonTitle:(id)arg5 otherButtonTitles:(id)arg6 tapBlock:(CDUnknownBlockType)arg7;
+ (id)showInView:(id)arg1 withTitle:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 tapBlock:(CDUnknownBlockType)arg6;
+ (id)showFromToolbar:(id)arg1 withTitle:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 tapBlock:(CDUnknownBlockType)arg6;
+ (id)showFromTabBar:(id)arg1 withTitle:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 tapBlock:(CDUnknownBlockType)arg6;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didPresentActionSheet:(id)arg1;
- (void)willPresentActionSheet:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType didPresentBlock;
@property(copy, nonatomic) CDUnknownBlockType willPresentBlock;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock;
- (void)_checkActionSheetDelegate;
@end

