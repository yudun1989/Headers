//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDKInterest : NSObject
{
    NSString *_identifier;
    NSString *_name;
}

+ (id)interestFromDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

