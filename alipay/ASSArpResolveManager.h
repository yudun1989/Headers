//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ASSArpResolveManager : NSObject
{
    CDUnknownBlockType _callback;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)pingResult:(id)arg1;
- (void)startPing:(CDUnknownBlockType)arg1;

@end

