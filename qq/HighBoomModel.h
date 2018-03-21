//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface HighBoomModel : NSObject
{
    NSString *_chars_exclude;
    NSString *_font_name;
    NSArray *_font_styles;
    NSString *_max_words;
    NSString *_style_version;
}

@property(copy, nonatomic) NSString *style_version; // @synthesize style_version=_style_version;
@property(copy, nonatomic) NSString *max_words; // @synthesize max_words=_max_words;
@property(retain, nonatomic) NSArray *font_styles; // @synthesize font_styles=_font_styles;
@property(copy, nonatomic) NSString *font_name; // @synthesize font_name=_font_name;
@property(copy, nonatomic) NSString *chars_exclude; // @synthesize chars_exclude=_chars_exclude;
- (void)dealloc;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

