//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedButton.h"

@class NSArray, NSString;

@interface TTTintThemeButton : SSThemedButton
{
    _Bool _enableHighlightAnim;
    NSString *_imageColorThemeKey;
    NSString *_selectedImageColorThemeKey;
    NSString *_disabledImageColorThemeKey;
    NSArray *_imageColors;
    NSArray *_selectedImageColors;
    NSArray *_disabledImageColors;
    unsigned long long _controlState;
}

@property(nonatomic) unsigned long long controlState; // @synthesize controlState=_controlState;
@property(copy, nonatomic) NSArray *disabledImageColors; // @synthesize disabledImageColors=_disabledImageColors;
@property(copy, nonatomic) NSArray *selectedImageColors; // @synthesize selectedImageColors=_selectedImageColors;
@property(copy, nonatomic) NSArray *imageColors; // @synthesize imageColors=_imageColors;
@property(copy, nonatomic) NSString *disabledImageColorThemeKey; // @synthesize disabledImageColorThemeKey=_disabledImageColorThemeKey;
@property(copy, nonatomic) NSString *selectedImageColorThemeKey; // @synthesize selectedImageColorThemeKey=_selectedImageColorThemeKey;
@property(copy, nonatomic) NSString *imageColorThemeKey; // @synthesize imageColorThemeKey=_imageColorThemeKey;
@property(nonatomic) _Bool enableHighlightAnim; // @synthesize enableHighlightAnim=_enableHighlightAnim;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColorThemeKey:(id)arg1;
- (void)setBackgroundColors:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)themeChanged:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

