//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface ArkContextInfo : NSObject
{
    NSString *_context;
    NSDictionary *_semantic;
    NSString *_keyword;
    NSNumber *_equalInputText;
    NSNumber *_contextMatchType;
}

@property(retain) NSNumber *contextMatchType; // @synthesize contextMatchType=_contextMatchType;
@property(retain) NSNumber *equalInputText; // @synthesize equalInputText=_equalInputText;
@property(retain) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain) NSDictionary *semantic; // @synthesize semantic=_semantic;
@property(retain) NSString *context; // @synthesize context=_context;
- (void).cxx_destruct;

@end

