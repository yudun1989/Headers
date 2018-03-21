//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class MCDecorateTemplateExt, NSDate, NSDictionary, NSString;

@interface MCDecorateTemplate : NSObject <NSCoding>
{
    NSString *_templateID;
    NSDate *_date;
    NSString *_key;
    NSDictionary *_placeHolder;
    long long _ttl;
    MCDecorateTemplateExt *_templateExt;
    long long _modifiedTime;
}

@property(nonatomic) long long modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(retain, nonatomic) MCDecorateTemplateExt *templateExt; // @synthesize templateExt=_templateExt;
@property(nonatomic) long long ttl; // @synthesize ttl=_ttl;
@property(retain, nonatomic) NSDictionary *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateExpression:(id)arg1;
- (id)initWithDict:(id)arg1 expression:(id)arg2;

@end

