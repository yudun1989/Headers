//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor, UIFont;

@interface PPAttrubteLabel : UIView
{
    NSAttributedString *attString;
    UIFont *_font;
    UIColor *_fontColor;
    UIFont *_specialFont;
    UIColor *_specialColor;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *specialColor; // @synthesize specialColor=_specialColor;
@property(retain, nonatomic) UIFont *specialFont; // @synthesize specialFont=_specialFont;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSAttributedString *attString; // @synthesize attString;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

