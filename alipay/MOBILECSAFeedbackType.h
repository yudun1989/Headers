//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSAToString.h"

@class NSDictionary, NSString;

@interface MOBILECSAFeedbackType : MOBILECSAToString
{
    NSString *_code;
    NSString *_desc;
    NSString *_type;
    NSString *_url;
    NSDictionary *_extInfo;
}

+ (Class)extInfoElementClass;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

