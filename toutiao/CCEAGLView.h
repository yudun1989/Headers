//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyInput-Protocol.h"
#import "UITextInput-Protocol.h"

@class EAGLContext, NSDictionary, NSNotification, NSString, UITextPosition, UITextRange;
@protocol CCESRenderer, CCHTSLog, UITextInputDelegate, UITextInputTokenizer;

@interface CCEAGLView : UIView <UIKeyInput, UITextInput>
{
    id <CCESRenderer> renderer_;
    EAGLContext *context_;
    NSString *pixelformat_;
    unsigned int depthFormat_;
    _Bool preserveBackbuffer_;
    struct CGSize size_;
    _Bool discardFramebufferSupported_;
    _Bool multisampling_;
    unsigned int requestedSamples_;
    _Bool isUseUITextField;
    NSString *markedText_;
    struct CGRect caretRect_;
    struct CGRect originalRect_;
    NSNotification *keyboardShowNotification_;
    _Bool isKeyboardShown_;
    _Bool multiSampling_;
    UITextPosition *beginningOfDocument;
    UITextPosition *endOfDocument;
    id <UITextInputDelegate> inputDelegate;
    UITextRange *markedTextRange;
    NSDictionary *markedTextStyle;
    id <UITextInputTokenizer> tokenizer;
    id <CCHTSLog> _logger;
}

+ (id)viewWithFrame:(struct CGRect)arg1 pixelFormat:(id)arg2 depthFormat:(unsigned int)arg3 preserveBackbuffer:(_Bool)arg4 sharegroup:(id)arg5 multiSampling:(_Bool)arg6 numberOfSamples:(unsigned int)arg7;
+ (id)viewWithFrame:(struct CGRect)arg1 pixelFormat:(id)arg2 depthFormat:(unsigned int)arg3;
+ (id)viewWithFrame:(struct CGRect)arg1 pixelFormat:(id)arg2;
+ (id)viewWithFrame:(struct CGRect)arg1;
+ (Class)layerClass;
@property(nonatomic) id <CCHTSLog> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer; // @synthesize tokenizer;
@property(nonatomic) id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate;
@property(readonly, nonatomic) UITextPosition *endOfDocument; // @synthesize endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument; // @synthesize beginningOfDocument;
@property(copy, nonatomic) NSNotification *keyboardShowNotification; // @synthesize keyboardShowNotification=keyboardShowNotification_;
@property(readonly, nonatomic, getter=isKeyboardShown) _Bool isKeyboardShown; // @synthesize isKeyboardShown=isKeyboardShown_;
@property(nonatomic) _Bool multiSampling; // @synthesize multiSampling=multiSampling_;
@property(readonly, nonatomic) EAGLContext *context; // @synthesize context=context_;
@property(readonly, nonatomic) unsigned int depthFormat; // @synthesize depthFormat=depthFormat_;
@property(readonly, nonatomic) NSString *pixelFormat; // @synthesize pixelFormat=pixelformat_;
@property(readonly, nonatomic) struct CGSize surfaceSize; // @synthesize surfaceSize=size_;
- (void)doAnimationWhenAnotherEditBeClicked;
- (void)doAnimationWhenKeyboardMoveWithDuration:(float)arg1 distance:(float)arg2;
- (void)onUIKeyboardNotification:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @synthesize markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange; // @synthesize markedTextRange;
- (void)setMarkedTextRange:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
@property(copy) UITextRange *selectedTextRange;
@property(nonatomic) long long autocapitalizationType;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handleTouchesAfterKeyboardShow;
- (struct CGRect)convertRectFromViewToSurface:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromViewToSurface:(struct CGPoint)arg1;
- (unsigned int)convertPixelFormat:(id)arg1;
- (void)swapBuffers;
- (void)layoutSubviews;
- (void)dealloc;
- (_Bool)setupSurfaceWithSharegroup:(id)arg1;
- (int)getHeight;
- (int)getWidth;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pixelFormat:(id)arg2 depthFormat:(unsigned int)arg3 preserveBackbuffer:(_Bool)arg4 sharegroup:(id)arg5 multiSampling:(_Bool)arg6 numberOfSamples:(unsigned int)arg7;
- (id)initWithFrame:(struct CGRect)arg1 pixelFormat:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;

@end

