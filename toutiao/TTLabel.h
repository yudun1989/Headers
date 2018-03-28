//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString;

@interface TTLabel : UILabel
{
    double _firstLineIndent;
    double _lineHeight;
    NSString *_textColorKey;
    NSString *_backgroundColorKey;
    NSString *_borderColorKey;
}

@property(retain, nonatomic) NSString *borderColorKey; // @synthesize borderColorKey=_borderColorKey;
@property(retain, nonatomic) NSString *backgroundColorKey; // @synthesize backgroundColorKey=_backgroundColorKey;
@property(retain, nonatomic) NSString *textColorKey; // @synthesize textColorKey=_textColorKey;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double firstLineIndent; // @synthesize firstLineIndent=_firstLineIndent;
- (void).cxx_destruct;
- (void)setHeight:(double)arg1;
- (double)height;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setBottom:(double)arg1;
- (double)bottom;
- (void)setTop:(double)arg1;
- (double)top;
- (void)setOrigin:(struct CGPoint)arg1;
- (struct CGPoint)origin;
- (double)lineOffset;
- (void)sizeToFit:(double)arg1;
- (void)refreshText;
- (void)tt_selfThemeChanged:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setText:(id)arg1;

@end

