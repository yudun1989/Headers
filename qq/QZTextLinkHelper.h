//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL, UIColor;

@interface QZTextLinkHelper : NSObject
{
    NSMutableDictionary *linkAttributes_;
    struct _NSRange _range;
}

+ (id)linkHelperWithAttributes:(id)arg1;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)description;
- (id)getAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) UIColor *linkedBgColor;
@property(retain, nonatomic) UIColor *linkedTextColor;
@property(retain, nonatomic) UIColor *linkTextColor;
@property(nonatomic) long long linkType;
@property(retain, nonatomic) id linkAction;
@property(retain, nonatomic) NSURL *linkUrl;
- (id)generateCoreTextAttributes;
@property(readonly, nonatomic) __weak NSDictionary *linkAttributes;
- (id)initWithAttributes:(id)arg1;

@end

