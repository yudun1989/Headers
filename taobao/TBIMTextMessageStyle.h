//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

@interface TBIMTextMessageStyle : NSObject
{
    long long _version;
    UIFont *_textFont;
    UIColor *_textColor;
    UIColor *_textHighlightColor;
    long long _textAlignment;
    long long _lineBreakMode;
    double _textLabelMaxWidth;
}

@property(nonatomic) double textLabelMaxWidth; // @synthesize textLabelMaxWidth=_textLabelMaxWidth;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textHighlightColor; // @synthesize textHighlightColor=_textHighlightColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;

@end

