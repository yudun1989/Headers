//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface BKControlWrapper : NSObject <NSCopying>
{
    unsigned long long _controlEvents;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) unsigned long long controlEvents; // @synthesize controlEvents=_controlEvents;
- (void).cxx_destruct;
- (void)invoke:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHandler:(CDUnknownBlockType)arg1 forControlEvents:(unsigned long long)arg2;

@end

