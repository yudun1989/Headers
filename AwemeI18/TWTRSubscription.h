//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol TWTRSubscriber;

@interface TWTRSubscription : NSObject
{
    id <TWTRSubscriber> _subscriber;
    NSString *_className;
    NSString *_key;
}

@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) __weak id <TWTRSubscriber> subscriber; // @synthesize subscriber=_subscriber;
- (void).cxx_destruct;
- (id)initWithSubscriber:(id)arg1 className:(id)arg2 key:(id)arg3;

@end

