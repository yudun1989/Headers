//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSNumber, NSString, UIColor, UIFont, UIView;
@protocol ALPTextDelegate;

@interface ALPCounterTextLayer : CALayer
{
    _Bool _isMax;
    NSNumber *_maxValue;
    UIFont *_font;
    long long _textAlignment;
    UIColor *_fontColor;
    NSString *_content;
    NSString *_scrollFormat;
    id <ALPTextDelegate> _textDelegate;
    UIView *_parentView;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <ALPTextDelegate> textDelegate; // @synthesize textDelegate=_textDelegate;
@property(retain, nonatomic) NSString *scrollFormat; // @synthesize scrollFormat=_scrollFormat;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) _Bool isMax; // @synthesize isMax=_isMax;
- (void).cxx_destruct;
- (void)updateCurrentValue:(double)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithLayer:(id)arg1;

// Remaining properties
@property(nonatomic) double currentValue; // @dynamic currentValue;

@end

