//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UIColor, UIFont;

@interface aluTextField : UITextField
{
    _Bool _isSecurityField;
    UIFont *_placeHolderFont;
    UIColor *_placeHolderColor;
    double _textHeight;
}

@property(nonatomic) double textHeight; // @synthesize textHeight=_textHeight;
@property(nonatomic) _Bool isSecurityField; // @synthesize isSecurityField=_isSecurityField;
@property(retain, nonatomic) UIColor *placeHolderColor; // @synthesize placeHolderColor=_placeHolderColor;
@property(retain, nonatomic) UIFont *placeHolderFont; // @synthesize placeHolderFont=_placeHolderFont;
- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setDisableKeyboardShortCuts;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)textInsets;
- (void)setFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
