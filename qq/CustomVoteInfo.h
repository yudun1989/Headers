//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface CustomVoteInfo : NSObject
{
    int _customVoteId;
    NSString *_text;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int customVoteId; // @synthesize customVoteId=_customVoteId;
- (void)dealloc;
- (id)initWithDic:(id)arg1;

@end

