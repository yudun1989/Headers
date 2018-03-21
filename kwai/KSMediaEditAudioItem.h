//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface KSMediaEditAudioItem : NSObject
{
    _Bool _highlight;
    int _type;
    UIImage *_backgroundImage;
    UIImage *_forgroundImage;
    UIImage *_highlightForgroundImage;
    NSString *_title;
    NSString *_highlightTitle;
    CDUnknownBlockType _appearance;
}

@property(copy, nonatomic) CDUnknownBlockType appearance; // @synthesize appearance=_appearance;
@property(nonatomic) _Bool highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) NSString *highlightTitle; // @synthesize highlightTitle=_highlightTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *highlightForgroundImage; // @synthesize highlightForgroundImage=_highlightForgroundImage;
@property(retain, nonatomic) UIImage *forgroundImage; // @synthesize forgroundImage=_forgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end

