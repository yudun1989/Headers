//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface BLYDataManagerKVOModel : NSObject
{
    NSSet *_subscribers;
    NSString *_key;
}

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSSet *subscribers; // @synthesize subscribers=_subscribers;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSubscriber:(id)arg1 key:(id)arg2;

@end

