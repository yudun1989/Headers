//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface TBSCRichTextParser : NSObject
{
    NSString *_fontName;
    long long _fontSize;
    NSMutableArray *_imageInfos;
}

@property(readonly, nonatomic) NSMutableArray *imageInfos; // @synthesize imageInfos=_imageInfos;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;
- (id)mutableAttributedStringFromString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

