//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol KwaiBaseLogHandler;

@interface KwaiBaseLogHandler : NSObject
{
    id <KwaiBaseLogHandler> _handler;
}

+ (id)defaultHandler;
@property(nonatomic) __weak id <KwaiBaseLogHandler> handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)logWithLevel:(long long)arg1 file:(id)arg2 function:(id)arg3 line:(int)arg4 message:(id)arg5;

@end

