//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface UITextField (SNKeyboardManager)
+ (void)load;
- (void)removeGestureRecognizer;
- (id)mbk_tapGestureRecognizer;
- (void)setMbk_tapGestureRecognizer:(id)arg1;
- (id)mbk_panGestureRecognizer;
- (void)setMbk_panGestureRecognizer:(id)arg1;
- (_Bool)haveOtherResponder;
- (void)setHaveOtherResponder:(_Bool)arg1;
- (_Bool)isRectAdjusted;
- (void)setRectAdjusted:(_Bool)arg1;
@property(nonatomic) double mbk_keyboardDistance;
@property(nonatomic, getter=mbk_isAutoAdjustFrameEnabled) _Bool mbk_autoAdjustFrameEnabled;
@property(nonatomic, getter=mbk_isKeyboardManagerEnabled) _Bool mbk_keyboardManagerEnabled;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pan:(id)arg1;
- (void)tap:(id)arg1;
- (void)textFieldViewDidEndEditing:(id)arg1;
- (void)handleDidHideKeyboard:(id)arg1;
- (void)handleWillHideKeyboard:(id)arg1;
- (void)handleDidChangeFrameOfKeyboard:(id)arg1;
- (void)mbk_resignFirstResponder;
- (void)mbk_dealloc;
@end

