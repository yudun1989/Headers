//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor;
@protocol RFTextViewDelegate;

@interface RFTextView : UITextView
{
    _Bool _shouldNotDrawPlaceholder;
    NSString *_placeHolder;
    UIColor *_placeHolderTextColor;
    struct UIOffset _placeHolderTextOffset;
}

+ (unsigned long long)numberOfLinesForMessage:(id)arg1;
+ (unsigned long long)maxCharactersPerLine;
@property(nonatomic) _Bool shouldNotDrawPlaceholder; // @synthesize shouldNotDrawPlaceholder=_shouldNotDrawPlaceholder;
@property(nonatomic) struct UIOffset placeHolderTextOffset; // @synthesize placeHolderTextOffset=_placeHolderTextOffset;
@property(retain, nonatomic) UIColor *placeHolderTextColor; // @synthesize placeHolderTextColor=_placeHolderTextColor;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
- (void).cxx_destruct;
- (id)_placeholderTextAttributes;
- (void)_removeTextViewNotificationObservers;
- (void)_didReceiveTextViewNotification:(id)arg1;
- (void)_addTextViewNotificationObservers;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (unsigned long long)numberOfLinesOfText;
- (void)deleteBackward;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <RFTextViewDelegate> delegate; // @dynamic delegate;

@end

